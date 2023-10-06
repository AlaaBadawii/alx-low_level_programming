#include "main.h"
#include <string.h>
/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: int input
 * @av: char double_pointer
 * Return: pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, len;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	
	len = 0;

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}

	len--;

	ptr = malloc(len * sizeof(char));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	
	for (j = 0; j < ac; j++)
	{
		if (j == 0)
			strcpy(ptr, av[j]);
		else 
			strcat(ptr, av[j]);

		strcat(ptr, "\n");
	}
	
	return (ptr);
}
