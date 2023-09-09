#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	char a = 'a';

	while (a != 'z' + 1)
	{
		if (a == 'e' || a == 'q')
			a = a+1;
		putchar (a);
		a++;
	}

	putchar('\n');

	return (0);
}
