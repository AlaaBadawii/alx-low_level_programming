#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: char pointer input
 */
void _print_rev_recursion(char *s)
{
	char last;

	last = '\0';

	if (*s == '\0')
	{
		if (last == '\0')
		{
			_putchar('\n');
		}
		return;
	}

	last = *s;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
