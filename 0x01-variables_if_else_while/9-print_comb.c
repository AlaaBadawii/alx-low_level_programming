#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 *
 *Return: Always 0
 */
int main(void)
{
	int i;

	i = 48;

	while (i != 58)
	{
		putchar(48);

		if (i != 9)
		{
			putchar (',');
			putchar (' ');
		}

		i++;
	}

	putchar ('\n');

	return (0);
}
