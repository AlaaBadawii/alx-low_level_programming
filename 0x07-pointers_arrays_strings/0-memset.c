#include "main.h"
/**
 * _memset -  function that fills memory with a constant byte.
 * @s: char pointer input.
 * @b: char input
 * @n: unnsigned int input
 * Return: str
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char **str;
	
	str = &s;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (*str);
}
