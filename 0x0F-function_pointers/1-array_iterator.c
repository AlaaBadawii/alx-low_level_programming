#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as
 * a parameter on each element of an array.
 * @array: int pointer
 * @size: size_t input
 * @action: function pointter input
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
