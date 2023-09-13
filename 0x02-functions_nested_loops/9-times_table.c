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
			if (j == 0)
			{
				printf("%d", i * j);
			}
			else
			{
				if (i * j < 10)
				{
					printf(",  ");
					printf("%d", i * j);
				}
				else
				{
					if (j != 10)
					{
						printf(",");
						printf(" ");
						printf("%d", i * j);
					}
				}
			}

			j++;
		}

		printf("\n");
		i++;
	}
}
