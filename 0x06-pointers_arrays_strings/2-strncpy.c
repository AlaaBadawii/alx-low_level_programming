#include "main.h"
/**
 * _strncpy - a function that copies a string.
 * @dest: char pointer input.
 * @src: char pointer input.
 * @n: intt input
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(src + i) != '\0' && n > 0)
	{
		*(dest + i) = *(src + i);
		i++;
		n--;
	}
	if (*(src + i) == '\0')
	{
		*(dest + i) = '\0';
	}

	return (dest);
}
