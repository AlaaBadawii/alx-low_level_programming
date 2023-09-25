#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: char pointer input.
 * @c: char input
 * Return: pptr => pointer to the first occurrence
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char **pptr = &s;

	while (s[i] != c)
	{
		i++;
	}

	*pptr = &s[i];

	return (*pptr);
}

