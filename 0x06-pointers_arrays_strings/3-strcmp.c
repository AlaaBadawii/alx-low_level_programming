#include "main.h"
/**
 * _strcmp - unction that compares two strings.
 * @s1: char pointer input
 * @s2: char pointer input
 * Return: deff betwen s1 and s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int deff;

	while (*(s1 + i) != '\0')
	{
		if(*(s1 + i) != *(s2 + i))
		{
			deff = *(s1 + i) - *(s2 + i);
			return (deff);
		}
	}

	deff = 0;

	return (deff);
}
