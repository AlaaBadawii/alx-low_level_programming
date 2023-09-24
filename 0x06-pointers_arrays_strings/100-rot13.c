#include "main.h"
/**
 * rot13 - function that encodes a string using rot13.
 * @str: char pointer input
 * Return: str.
 */
char *rot13(char *str)
{
	int i, j;
	char rot_13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char data_13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	i = 0;

	while (str[i] != '\0')
	{

		j = 0;
		while (data_13[j] != '\0')
		{

			if (str[i] == data_13[j])
			{
				str[i] = rot_13[j];
			}

			j++;
		}

		i++;
	}

	return (str);
}
