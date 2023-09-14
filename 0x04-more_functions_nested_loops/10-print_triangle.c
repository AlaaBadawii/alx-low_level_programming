#include "main.h"
/**
 * print_triangle -  prints a triangle, followed by a new line.
 * @size:  size of the triangle
 */
void print_triangle(int size)
{
	int i, space;

	for (i = 1; i <= size; i++)
	{

		for (space = size; space < i + 1; space--)
		{
			_putchar(' ');
		}

		for (space = 1; space <= i; space++)
		{
			_putchar('#');
		}

		putchar('\n');
	}
}
