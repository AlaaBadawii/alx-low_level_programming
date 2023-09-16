#include "main.h"
/**
 * largest_prime_factor - calculacte the largest prime factor.
 * @num: long long int input
 * Return: prime.
 */
int largest_prime_factor(long long int num)
{
	int prime = 1;

	while (num % 2 == 0)
	{
		prime = 2;

		num /= 2;
	}

	for(i = 3; i * i <= num; i += 2)
	{

		while (num % i == 0)
		{
			prime = i;

			num /= i;
		}

	}

	if (num > 2)
	{
		prime = num;
	}
	
	return (prime);

}

/**
 * main -  program that finds and prints the largest prime factor.
 * Return: always 0;
 */
int main(void)
{
	int largest_factor;

	largest_factor = largest_prime_factor(612852475143);

	printf("%d", largest_factor);
}


