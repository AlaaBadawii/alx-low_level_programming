#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: int pointer input
 * @size: int input
 * @cmp: function pointer
 * Return: i or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
			if ((*cmp)(array[i]) != 0)
				return (i);
	}

	return (-1);
}
