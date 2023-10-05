#include "main.h"
/**
 * _strdup -  function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: char pointer
 * Return: NULL if str = NULL, or pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	if (str == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	ptr = malloc(i * sizeof(char));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	j = 0;

	while (j <= i)
	{
		*(ptr + j) = *(str + j);
		j++;
	}

	*(ptr + i + 1) = '\0';

	return (ptr);
}
