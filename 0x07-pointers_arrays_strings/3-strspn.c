#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: char pointer input
 * @accept: char pointer input
 * Return: num
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, flag, num;

	num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				num++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (num);
		}
	}

	return (0);
}
