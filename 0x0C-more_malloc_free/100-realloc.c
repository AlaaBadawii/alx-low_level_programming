#include "main.h"
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to the type you want
 * @old_size: unsigned int input
 * @new_size: unsigned int input
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size > old_size)
		ptr = malloc(new_size);

	else if (new_size == old_size)
		return (ptr);

	else if (ptr == NULL)
		return (malloc(new_size));

	else if (new_size == 0)
	{
		if (ptr != NULL)
			free(ptr);

		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	memcpy(new_ptr, ptr, old_size);

	free(ptr);

	return (new_ptr);
}
