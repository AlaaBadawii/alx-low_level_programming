#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size: int input.
 */
void print_square(int size)
{
	int j, i;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
