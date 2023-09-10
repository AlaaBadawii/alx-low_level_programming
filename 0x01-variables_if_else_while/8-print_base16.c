#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	char num;

	num = '0';

	while (num != 'f' + 1)
	{
		if (num == '9' + 1)
			num += 39;
		putchar(num);
		num++;
	}

	putchar('\n');

	return (0);
}

