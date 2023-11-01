#include "main.h"
/**
 * append_text_to_file -  function that appends text at the end of a file.
 * @filename: file name
 * @text_content: text to add to the end of the file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdo, fdw, len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		fdo = open(filename, O_WRONLY | O_APPEND);
		if (fdo < 0)
			return (-1);

		len = 0;
		while (*(text_content + len) != '\0')
			len++;

		fdw = write(fdo, text_content, len);

		if (fdw < 0)
		{
			close(fdo);
			write(STDOUT_FILENO, "fails", 5);
			return (-1);
		}
	}
	close(fdo);

	return (1);

}
