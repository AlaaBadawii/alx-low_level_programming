#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int i, j;

	i = 0;

	while (i < 24)
	{
		j = 0;
		
		while (j < 60)
		{
			printf("%d", i/ 10);
			printf("%d", i% 10);
			printf(":");
			printf("%d", j / 10);
			printf("%d", j % 10);
			printf("\n");
			j++;
		}

		i++;
	}
