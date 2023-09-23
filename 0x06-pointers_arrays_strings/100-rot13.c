#include "main.h"
#include <stdio.h>
/**
 * rot13 - function that encodes a string using rot13.
 * @str: char pointer input
 * Return: str.
 */
char *rot13(char *str)
{
	int i;
	char s_center, u_center;

	 u_center = 'N';
	 s_center = 'n';

	while (str[i] != '\0')
	{

		while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{

			if (str[i] >= s_center || str[i] >= u_center)
			{
				str[i] -= 13;
			}
			else
			{
				str[i] += 13;
			}
		}

		i++;
	}

	return (str);
}
