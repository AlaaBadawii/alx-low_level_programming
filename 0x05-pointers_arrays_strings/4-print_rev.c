#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: cahr pointer input
 */
void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	
	i = i - 1;

	while (i != -1)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
