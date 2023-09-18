#include "main.h"
/**
 * puts2 - prints every other character of a string
 * , starting with the first character.
 * @str: char pointer input.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ( i % 2 != 0)
			continue;

		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
