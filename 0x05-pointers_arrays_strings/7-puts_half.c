#include "main.h"
/**
 * puts_half -  prints half of a string, followed by a new line.
 * @str: char pointer input.
 */
void puts_half(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		j = i / 2;
	}
	else
	{
		j = ((i - 1) / 2) + 1;
	}

	while (j != '\0')
	{
		_putchar(str[j]);
		j++;
	}

	_putchar('\n');
}


