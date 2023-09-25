#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: char pointer input.
 * @c: char input
 * Return: pptr => pointer to the first occurrence, or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0, j;
	char **pptr = &s;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		if (s[j] == c)
		{
			*pptr = &s[j];
			break;
		}
		else
		{
			return (NULL);
		}
	}

	return (*pptr);
}
