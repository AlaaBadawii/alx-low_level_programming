#include "main.h"

int main(int ac, char **av)
{
	int file_from, file_to;
	ssize_t fdr, fdw;
	char *buf;

	if (ac < 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = malloc(sizeof(char) * BUFSZ);
	if (buf == NULL)
	{
		dprintf(2, "Error: memory allocation failure\n");
		exit(97);
	}

	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	while ((fdr = read(file_from, buf, BUFSZ)) != 0)
	{
		if (fdr == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
			if (close(file_from) == -1)
			{
				dprintf(2, "Can't close fd %d\n", file_from);
				exit(100);
			}
			exit(98);
		}
		fdw = write(file_to, buf, fdr);
		if (fdw == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			if (close(file_to) == -1)
			{
				dprintf(2, "Can't close fd %d\n", file_to);
				exit(100);
			}
			exit(99);
		}
	}

	if (close(file_from) == -1)
	{
		dprintf(2, "Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(2, "Can't close fd %d\n", file_to);
		exit(100);
	}
	free(buf);

	return (0);
}
