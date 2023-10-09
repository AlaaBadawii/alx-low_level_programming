#include"main.h"
char *_memset(char *s, char b, unsigned int n);
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

	_memset(ptr, 0, (size * nmemb));

	return (ptr);
}
/**
 * _memset - function fills a block of memory with a specific character
 * @s: char pointer input
 * @b: char input
 * @n: unsigned int input
 * Return: s => pointer to allocated memmory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
