#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -  prints all natural numbers from n to 98.
 * @n: int input
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("98\n");
		return;
	}

	if (n > 98)
	{
		while (n != 97)
		{
			printf("%d", n);
			if (n > 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		while (n != 99)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}

	printf("\n");
}
