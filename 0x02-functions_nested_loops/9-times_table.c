#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i = 0, j;

	while (i != 10)
	{
		j = 0;

		while (j != 10)
		{
			printf("%d", i * j);

			if (i * j < 10 && j != 9)
			{
				printf(",  ");
			}
			else
			{

				if (j != 9)
				{
					printf(",");
					printf(" ");
				}

			}

			j++;
		}

		printf("\n");
		i++;
	}
}
