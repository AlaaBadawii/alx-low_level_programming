#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: int input
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	i = 0;

	while (i != n)
	{

		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
