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
	char *strout;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = strlen(s1) + strlen(s2);
	strout = malloc(sizeof(char) * (len + 1));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		strout[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		strout[i + j] = s2[j];
	}

	strout[len] = '\0';

	return (strout);
}
