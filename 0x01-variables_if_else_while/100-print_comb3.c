#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always 0
 */
int main(void)
{
	int j, i;


	i = 48;
	j = 48;
	
	while (i != 57)
	{	
		j = i;
		while (j != 57)
		{
			putchar(i);
			putchar(j + 1);

			if (j != 57 && i != 56)
			{
				putchar(',');
				putchar(' ');
			}

			j++;
		}

		i++;
	}

	putchar('\n');

	return (0);
}
