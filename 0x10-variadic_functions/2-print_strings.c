#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: const char pointer
 * @n: const unsigned int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (i + 1 != n)
			printf("%s", separator);
	}

	va_end(ptr);
	printf("\n");
}
