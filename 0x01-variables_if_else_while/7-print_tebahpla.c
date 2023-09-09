#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	char a;

	a = 'z';

	while (a != 'a' - 1)
	{
		putchar (a);
		a--;
	}

	putchar('\n');

	return (0);
}


