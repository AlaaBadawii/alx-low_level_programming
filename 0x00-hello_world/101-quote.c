#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main -  C program that prints exactly
 * and that piece of art is useful" - Dora Korpar, 2015-10-19,
 * followed by a new line,
 *
 * Return: always 0
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int len = strlen(str);

	write(1, str, len);
	write(2, "\n", 1);

	return (0);
}
