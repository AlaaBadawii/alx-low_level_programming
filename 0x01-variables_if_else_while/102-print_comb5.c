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

	while (i < 99)
	{
		j = i + 1;

		while (j <= 99)
		{
			putchar (i / 10 + '0');
			putchar (i % 10 + '0');
			putchar (' ');
			putchar (j / 10 + '0');
			putchar (j % 10 + '0');
			putchar (',');
			putchar (' ');
			j++;
		}

		i++;
	}

	putchar ('\n');

	return (0);
}

