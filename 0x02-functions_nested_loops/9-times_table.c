#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i = 0, j;

	while (i != 9)
	{
		j = 0;

		while (j != 9)
		{
			printf("%d", i * j);

			if ((i * j) < 10)
			{
				printf(",");
				printf(" ");
				printf(" ");
			}
			else
			{
				printf(",");
				printf(" ");
			}

			j++;
		}

		printf("\n");
		i++;
	}
}
