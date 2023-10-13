#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: const char pointer
 * @n: const unsigned int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ptr, char *));
		j = 0;
		while (separator[j] != '\0' && i + 1 != n)
		{
			printf("%c", separator[i]);
			j++;
		}
	}

	va_end(ptr);
	printf("\n");
}
