#include "main.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of an integer.
 * @n: int input
 * Return: absolute value.
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
