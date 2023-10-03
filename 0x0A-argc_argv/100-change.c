#include "main.h"
#include <stdlib.h>

/**
 * main -  program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: int input
 * @argv: char double_pointer
 * Return: always 0
 */
int main(__attribute__((unused)) int argc, char **argv)
{
	int coin, num, two, quarter, dime, penny, nickel;

	if (argc < 2)
	{
		printf("Error\n");

		return (1);
	}

	coin = atoi(argv[1]);
	num = 0;

	for (quarter = 25; coin >= quarter; coin -= 25)
	{
		num++;
	}

	for (dime = 10; coin >= dime; coin -= 10)
	{
		num++;
	}

	for (nickel = 5; coin >= nickel; coin -= 5)
	{
		num++;
	}

	for (two = 2; coin >= two; coin -= 2)
	{
		num++;
	}

	for (penny = 1; coin >= penny; coin -= 1)
	{
		num++;
	}

	printf("%d\n", num);

	return (0);
}
