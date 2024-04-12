#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array:  pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: index where value is located, or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start, mid, end, i;

	start = 0;
	end = size - 1;
	mid = end / 2;

	while (start <= end)
	{
		printf("Searching in array:");
		for (i = start; i <= end; i++)
		{
			if (i != end)
				printf(" %d,", array[i]);
			else
				printf(" %d\n", array[i]);
		}

		mid = (start + end) / 2;

		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			end = mid - 1;
		else
			start = mid + 1;
	}

	return (-1);
}
