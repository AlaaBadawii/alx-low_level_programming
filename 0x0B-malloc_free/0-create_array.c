#include "main.h"
/**
 * create_array -  function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: unsigned int input
 * @c: char input
 * Return: pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));
	i = 0;

	if (ptr == NULL)
		return (NULL);

	while (i < size)
	{
		*(ptr + i) = c;
		i++;
	}

	*(ptr + i) = '\0';

	return (ptr);
}
