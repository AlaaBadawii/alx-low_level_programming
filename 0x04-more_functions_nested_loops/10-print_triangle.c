#include "main.h"
/**
 * print_triangle -  prints a triangle, followed by a new line.
 * @size:  size of the triangle
 */
void print_triangle(int size)
{
	int i, space, k;

	for (i = 1; i <= size; ++i, k = 0)
	{

		for (space = 1; space <= size - i; ++space)
		{
			_putchar(' ');
		}

		while (k < 2 * i - 1)
		{
			putchar('#');
			++k;
		}

		putchar('\n');
	}
}
