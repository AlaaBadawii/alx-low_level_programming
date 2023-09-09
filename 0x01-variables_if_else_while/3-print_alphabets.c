#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 *
 * Return: Always 0;
 */
int main(void)
{
	char a;

	a = 'a';

	while (a != 'Z' + 1)
	{
		putchar(a);
		if (a == 'z')
			a = a - 58;
		a++;
	}
	putchar('\n');

	return (0);
}
