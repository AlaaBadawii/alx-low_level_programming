#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: const unsigned int
 * Return: sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;

	va_list ptr;

	sum = 0;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, unsigned int);

	va_end(ptr);

	return (sum);
}
