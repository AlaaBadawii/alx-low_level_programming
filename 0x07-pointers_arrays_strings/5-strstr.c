#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: char pointer input
 * @needle: char pointer input
 * Return: a, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *a = haystack;
	char *b = needle;
	int i;

	while (*a != '\0')
	{
		if (*a == *b)
		{
			i = 0;
			while (a[i] != '\0' && b[i] != '\0' && a[i] == b[i])
			{
				i++;
			}

			if (b[i] == '\0')
			{
				return ((char *)a);
			}
		}

		a++;
	}

	return (NULL);
}
