#include "main.h"
/**
 * factorial -  function that returns the factorial of a given number.
 * @n: int input
 * Return: -1 if n < 0, or factorial.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if ( n <= 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
