#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: char pointer input
 * @accept: char pointer input
 * Return: pptr, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *pptr = NULL;

	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				pptr = &s[i];
				
				return (pptr);

				break;
			}
			j++;
		}
		i++;
	}

	return (pptr);
}
