#include "main.h"
/**
 * leet - function that encodes a string into 1337.
 * @str: char pointer input.
 * Return: str.
 */
char *leet(char *str)
{
	int i, j, e;
	char *change = "43071";
	char *values = "aAeEoOtTlL";

	i = 0;

	while (str[i] != '\0')
	{
		j = 0;
		e = 0;
		while (j < 10)
		{

			if (str[i] == values[j] || str[i] == values[j + 1])
			{
				str[i] = change[e];
			}

			j += 2;
			e++;
		}

		i++;
	}

	return (str);
}
