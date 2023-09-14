#include "main.h"
/**
 * print_triangle -  prints a triangle, followed by a new line.
 * @size:  size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{

		for (j = 0; j != 0; j--)
		{

			if (j < size - (i+1))
			{
			_putchar(' ');
			}
			else
			{
			_putchar('#');
			}
		}

		_putchar('\n');
	}
}
