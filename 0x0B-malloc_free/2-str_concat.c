#include "main.h"
#include <string.h>
/**
 * str_concat - that concatenates two strings.
 * @s1: char pointer
 * @s2: char pointer
 * Return: ptr =>  point to a newly allocated space in memory
 * which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len;
	char *ptr;

	i = 0;
	j = 0;

	if (s1 == NULL || s2 == NULL)
		 return (NULL);

	len = strlen(s1) + strlen(s2);
	ptr = malloc(len * sizeof(char) + 1);


	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	while (*s1 != '\0')
	{
		*(ptr + j) = *(s1 + i);
		s1++;
		j++;
	}

	i = 0;

	while (*s2 != '\0')
	{
		*(ptr + j) = *(s2 + i);
		s2++;
		i++;
		j++;
	}

	*(ptr + len + 1) = '\0';

	return (ptr);
}
