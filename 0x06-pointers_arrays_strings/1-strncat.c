#include "main.h"
/**
 * _strncat - The _strncat function is similar to the _strcat function
 * , except that it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: char pointer input.
 * @src: char pointer input.
 * @n: int input.
 * Return: a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0 ,j;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	j = 0;

	while (n > 0)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
		n--;
	}

	return (dest);
}
