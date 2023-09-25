#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: char pointer input
 * @accept: char pointer input
 * Return: num
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int num;
	
	i = 0;
	j = 0;
	num = 0;

	if (s[i] == '\0' || accept[j] == '\0')
	{
		return 0;
	}

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				num++;
			}
			j++;
		}
		i++;
	}

	return (num);
}
