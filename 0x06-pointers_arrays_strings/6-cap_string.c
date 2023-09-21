#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * cap_string - function that capitalizes all words of a string.
 * @str: char pointer input
 * Return: str
 */
char *cap_string(char *str)
{
	int i = 0;
	char separators[] = " ,\n\t;.!?\"(){}";

	while (str[i] != '\0')
	{
		if (islower(str[i]))
		{
			str[i] -= 32;
			break;
		}

		if (strchr(separators, str[i - 1]) && islower(str[i]))
		{
			str[i] -= 32;
		}

		i++;
	}

	return (str);
}

