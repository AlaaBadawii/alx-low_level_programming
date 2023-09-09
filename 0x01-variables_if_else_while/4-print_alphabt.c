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
			continue;
		else
			putchar (a);
		a++;
	}

	return (0);
}
