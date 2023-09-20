#include "main.h"
/**
 * _strcat - appends the src string to the dest string
 * , overwriting the terminating null byte (\0) at the end of dest
 * , and then adds a terminating null byte.
 * @dest: char pointer input.
 * @src: char pointer input.
 * Return: pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	j = 0;

	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		j++;
		i++;
	}

	*(dest + i) = ('\0');

	return (dest);
}
