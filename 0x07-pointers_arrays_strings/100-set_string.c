#include "main.h"
/**
 * set_string - function that sets the value of a pointer to a char.
 * @s: char double_pointer input
 * @to: char pointer input
 */
void set_string(char **s, char *to)
{
	char *temp = *s;

	*s = to;
	to = temp;
}
