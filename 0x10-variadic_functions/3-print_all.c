#include "variadic_functions.h"
/**
 * print_all - function that prints anything.
 * @format: char pointer
 */
void print_all(const char * const format, ...)
{
	char *str;
	int i;

	va_list ptr;

	va_start(ptr, format);

	i = 0;
	while (format[i] != '\0' && format != NULL)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(ptr, int));
				break;
			case 'i':
				printf("%i", va_arg(ptr, int));
				break;
			case 'f':
				printf("%f", va_arg(ptr, double));
				break;
			case 's':
				str = va_arg(ptr, char *);
				if (str != NULL)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 's'
					|| format[i] == 'f') && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(ptr);

	printf("\n");
}
