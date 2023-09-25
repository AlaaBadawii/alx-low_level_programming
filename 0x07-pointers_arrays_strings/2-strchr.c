#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: char pointer input.
 * @c: char input
 * Return: pptr => pointer to the first occurrence, or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	return (NULL);
}
