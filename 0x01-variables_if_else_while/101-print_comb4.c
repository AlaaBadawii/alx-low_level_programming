#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: Always 0
 */
int main(void)
{
	int j, i, k;

	i = 48;
	j = 48;
	k = 48;

	while (i != 58)
	{
		j = i + 1;

		while (j != 58)
		{
			k = j + 1;
			while (k != 58)
			{
				if (i != j && j != i && i != k)
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (k != 57 || j != 56 || i != 55)
					{
						putchar(',');
						putchar(' ');
					}
				}

				k++;
			}

			j++;
		}

		i++;
	}

	putchar ('\n');

	return (0);
}
