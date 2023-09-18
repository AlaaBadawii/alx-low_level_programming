#include "main.h"
/**
 * swap_int - function that swaps the values of two integers.
 * @a: int pointer input.
 * @b: int pointer input.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
