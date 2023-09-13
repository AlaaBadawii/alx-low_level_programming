#include "main.h"
#include <stdio.h>
/**
 * print_sign - prints the sign of a number.
 * @n: int input
 * Return: 1 and prints + if n is greater than zero.
 *		0 and prints 0 if n is zero.
 *		-1 and prints - if n is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		printf("+");
	}
	else if (n < 0)
	{
		return (-1);
		printf("-");
	}
	else
	{
		return (0);
		printf("zero");
	}
}
