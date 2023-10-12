#include "3-calc.h"
#include "function_pointers.h"
#include "stdlib.h"
/**
 * main - program that performs simple operations.
 * @argc: int input
 * @argv: double_pointer
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int num1, num2;
	int (*operation)(int a, int b);

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operation = (*get_op_func)(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operation(num1, num2));

	return (0);
}
