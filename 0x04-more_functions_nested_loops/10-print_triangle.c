#include "main.h"
/**
 * print_triangle -  prints a triangle, followed by a new line.
 * @size:  size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	j = size - 1;

	_putchar(' ' * j);

	for (i = 0; i < size; i++)
	{
		_putchar('#');

		j = j - 1;
	}

