#include <stdio.h>
/**
 * main -  prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	i = 0;
	j = 0;

	while (i < 98)
	{
		j = i + 1;

		while (j <= 99)
		{
			putchar (i / 10);
			putchar (i % 10);
			putchar (' ');
			putchar (j / 10);
			putchar (j % 10);
			j++;
		}

		i++;
		putchar (',');
		putchar (' ');
	}

	putchar ('\n');

	return (0);
}

