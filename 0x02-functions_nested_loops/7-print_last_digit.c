#include <stdio.h>
#include "main.h"
/**
 * print_last_digit -  prints the last digit of a number.
 * @n: int input
 * Return: last digit of number
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n;

	while (last_digit >= 10)
	{
		last_digit = last_digit % 10;
	}
	
	char result = char (last_digit) + char (last_digit);
	return ();
}
