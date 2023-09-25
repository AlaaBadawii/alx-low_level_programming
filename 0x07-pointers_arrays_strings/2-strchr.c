#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: char pointer input.
 * @c: char input
 * Return: pptr => pointer to the first occurrence, or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char **pptr = &s;

	if (c == '\0')
		return (NULL);

	while (s[i] != c)
	{
		i++;
	}

	*pptr = &s[i];

	return (*pptr);
}

