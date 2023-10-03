#include "main.h"
/**
 * main -  program that prints the number of arguments passed into it.
 * @argc: int input
 * @argv: char pointer to pointer
 * Return: always 0
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
