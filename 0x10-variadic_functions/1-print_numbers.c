#include "variadic_functions.h"
/**
 * print_numbers -  function that prints numbers, followed by a new line.
 * @separator: const char pointer
 * @n: const unsigned int input
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;

	va_list ptr;

	if (separator == NULL)
		return;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		j = 0;
		printf("%d", va_arg(ptr, unsigned int));
		while (separator[j] != '\0' && (i + 1) != n)
		{
			printf("%c", separator[j]);
			j++;
		}
	}
	printf("\n");

	va_end(ptr);
}
