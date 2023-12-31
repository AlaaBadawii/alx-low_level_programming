#include "main.h"
/**
 * array_range - function that creates an array of integers.
 * @min: int input
 * @max: int input
 * Return: ptr => pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *ptr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);
}
