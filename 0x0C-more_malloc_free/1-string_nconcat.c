#include "main.h"
/**
 * string_nconcat -  function that concatenates two strings.
 * @s1: char pointer input
 * @s2: char pointer input
 * @n: unsigned int input
 * Return: strout
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strout;
	unsigned int size, s1_size, s2_size, i, k, l;

	s1_size = 0;
	s2_size = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_size] != '\0')
	{
		s1_size++;
	}

	while (s2[s2_size] != '\0')
	{
		s2_size++;
	}

	if (n > s2_size)
		n =s2_size;

	size = s1_size + n + 1;
	strout = malloc(sizeof(char) * size);

	if (strout == NULL)
		return (NULL);

	for (i = 0; i < s1_size; i++)
		strout[i] = s1[i];

	l = 0;

	for (k = i; k < size - 1; k++, l++)
		strout[k] = s2[l];

	strout[size - 1] = '\0';

	return (strout);
}
