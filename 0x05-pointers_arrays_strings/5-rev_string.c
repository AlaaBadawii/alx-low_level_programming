#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: char pointer input
 */
void rev_string(char *s)
{
	char tmp;
	int i = 0, j;
	while(s[i] != '\0')
	{
		i++;
	}

	i -= 1;
	j = 0;

	while(j < i)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;

		i--;
		j++;
	}
}

