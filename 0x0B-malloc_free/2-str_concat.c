#include "main.h"
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
	unsigned int i, j, k;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}

	ptr = malloc(sizeof(char) * (i + j + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
	{
		ptr[k] = s1[k];
	}

	j = 0;

	while(*s2 != '\0')
	{
		ptr[k] = s2[j];
		j++;
		k++;
	}

	ptr[k + 1] = '\0';

	return (ptr);
}
