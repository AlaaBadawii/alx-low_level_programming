#include "main.h"
/**
 * main - program that prints its name, followed by a new line.
 * @argc: int input
 * @argv: char pointer to pointer input.
 * Return: always 0
 */
int main(__attribute__((unused)) int argc, char **argv)
{
	printf("%s\n", *argv);

	return (0);
}
