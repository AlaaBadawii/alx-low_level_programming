#include <stdio.h>
/**
 * linear_search - searches for a value in an array of integers,
 * using the Linear search algorithm
 * @array:  pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: value if present or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (array[i]);
	}

	return (-1);
}

