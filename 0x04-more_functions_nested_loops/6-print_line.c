#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: int input
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\\');
		_putchar('n');
		return;
	}
	while (i != n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\\');
	_putchar('n');
}
