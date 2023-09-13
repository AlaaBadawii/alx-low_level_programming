#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -  prints all natural numbers from n to 98.
 * @n: int input
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
		{
			printf("%d", n);
			if ( n != 98)
			{
				printf(", ");
			}
			n--;
		}
		else if (n == 98)
		{
			printf("%d", n);
		}
		else
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
