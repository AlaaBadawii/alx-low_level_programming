#include "main.h"
/**
 * *_strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0)
 * @dest: char pointer input
 * @src: char pointer input
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j;

	while (src[i] != '\0')
	{
		i++;
	}

	i += 1;
	j = 0;

	while (i != 0)
	{
		dest[j] = src[j];
		i--;
		j++;
	}

	return (dest);
}
