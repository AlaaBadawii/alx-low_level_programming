#include "main.h"
#define BUFSIZE 1024
void error(char *msg, char *file, int code);

/**
 * main - program that copies the content of a file to another file.
 * @argc: number of argument
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int file_to, file_from;
	ssize_t fdr, fdw;
	char buff[BUFSIZE];

	/* check if i get the correct argument number */
	if (argc < 3)
		error("Usage: cp file_from file_to", NULL, 97);

	/* open file copy from */
	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
		error("Error: Can't read from file", argv[2], 98);

	/* open file copy to */
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to < 0)
		error("Error: Can't write from file", argv[2], 99);

	/* copy from file_from amd paste to file_to */
	while ((fdr = read(file_from, buff, BUFSIZE)) > 0)
	{
		fdw = write(file_to, buff, fdr);
		if (fdw < 0 || fdw != fdr)
			error("Error: Can't write to", argv[2], 99);
	}

	/* check cases */
	if (fdr < 0)
		error("Error: Can't read from file", argv[1], 98);
	if (close(file_from) == -1)
	{
		dprintf(2, "Error: Can't close %d", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(2, "Error: Can't close %d", file_to);
		exit(100);
	}

	return (0);
}

/**
 * error - function to print error messages and exit
 * @msg: error message
 * @file: file name
 * @code: exit code
 */
void error(char *msg, char *file, int code)
{
	dprintf(2, "%s %s\n", msg, file);
	exit(code);
}
