#include"main.h"
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: unsigned int input
 * @size: unsigned int input
 * Return: prt
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
