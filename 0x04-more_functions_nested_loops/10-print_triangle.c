#include "main.h"
/**
 * print_triangle -  prints a triangle, followed by a new line.
 * @size:  size of the triangle
 */
void print_triangle(int size)
{
	int i, space;

	if (size == 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{

		for (space = i; space < size; space++)
		{
			_putchar(' ');
		}

		for (space = 1; space <= i; space++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
