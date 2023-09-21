#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: char pointer input
 * Return: str
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (*(str + i) > 'Z')
		{
			*(str + i) -= 32;
		}
		i++;
	}

	return (str);
}
