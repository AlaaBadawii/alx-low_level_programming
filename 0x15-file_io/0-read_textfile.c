#include "main.h"
/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: char pointer
 * @letters: size_t input
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *c;
	ssize_t sz_read, sz_write;

	c = malloc(sizeof(char) * letters);
	if (c == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	sz_read = read(fd, c, letters);
	sz_write = write(STDOUT_FILENO, c, sz_read);
	if (sz_write != sz_read)
		return (0);

	free(c);
	close(fd);

	return (sz_write);
}
