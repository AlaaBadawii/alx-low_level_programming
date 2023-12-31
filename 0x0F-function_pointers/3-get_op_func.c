#include "function_pointers.h"
#include "3-calc.h"

/**
 * get_op_func - pointer function
 * @s: char pointer input
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 10)
	{
		if (ops->op[i] == s[0])
			break;
		i++;
	}

	return (ops[i / 2].f);
}
