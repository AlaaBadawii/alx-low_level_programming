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
		if (str[0] > 90)
			str[0] -= 32;
		//if(str[i] == '\t')
		//	*(str + i) = ' ';

		if (str[i] > 90 && ((str[i - 1] == ' ' || str[i - 1] == '\n') ||  str[i - 1] == '\t'))
			str[i] -= 32;

		i++;
	}

	return (str);
}

