#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: char pointer input
 * @needle: char pointer input
 * Return: a, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *start;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			start = haystack;
			while (*needle != '\0' && (*haystack != '\0' || *haystack == ' ')  &&*needle == *haystack)
			{
					needle++;;
					haystack++;
			}
			if (*needle == '\0' && (*haystack == '\0' || *haystack == ' '))
				return (start);
		}
		haystack++
	}
	return (NULL);
}
