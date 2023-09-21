#include "main.h"
/**
 * reverse_array -  function that reverses the content of an array of integers.
 * @a: int pointer input.
 * @n: int input.
 */
void reverse_array(int *a, int n)
{
	int i, center;
	int tmp;

	center = n / 2;
	tmp = 0;
	n -= 1;

	for (i = 0; i < center; i++)
	{
		tmp = a[i];
		*(a + i) = *(a + n);
		*(a + n) = tmp;
		n--;
	}
}
