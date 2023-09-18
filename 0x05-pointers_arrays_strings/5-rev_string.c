#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: char pointer input
 */
void rev_string(char *s)
{
	char tmp;
	int i = 0, j, c;
	while(s[i] != '\0')
	{
		i++;
	}

	i -= 1;
	j = 0;
	if (i % 2 == 0)
	{
		c = i / 2;
	}
	else
	{
		c = i / 2 + 1;
	}


	while(i != c)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;

		i--;
		j++;
	}
}

