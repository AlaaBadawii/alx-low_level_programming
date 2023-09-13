#include "main.h"
#include "stdio.h"
/**
 * print_alphabet - prints the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char i;

	i = 'a';

	while (i != 'z' + 1)
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
}
