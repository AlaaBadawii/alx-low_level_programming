#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * @str: char pointer input
 * Return: str
 */
char *cap_string(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		if (str[0] > 90 )
			str[0] -= 32;

		switch (str[i -1])
		{
			case ',':
			case ' ':
			case '\n':
			case '\t':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				str[i] -= 32;
				break;
			default:
				break;
		}

		i++;
	}

	return (str);
}

