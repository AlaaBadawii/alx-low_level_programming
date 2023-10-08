#include "main.h"
/**
 * malloc_checked -  function that allocates memory using malloc.
 * @b: unsigned int input.
 * Return: ptr
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(sizeof(unsigned int) * b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
