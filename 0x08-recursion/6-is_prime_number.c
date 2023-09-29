#include "main.h"

int is_prime_number_helper(int n, int i);

/**
 * is_prime_number - function that returns
 * 1 if the input integer is a prime number, otherwise return 0.
 * @n: int input
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_number_helper(n, n / 2));
}

/**
 * is_prime_number_helper - helper function to is_prime_number function
 * @n: int input
 * @i: int input
 * Return: 0 or 1 if not prime number or prime number
 */
int is_prime_number_helper(int n, int i)
{
	if (i <= 0)
		return (0);
	if (i * i == n)
		return (0);

	if (i * n == n && i == 1)
		return (1);

	return (is_prime_number_helper(n, i - 1));
}
