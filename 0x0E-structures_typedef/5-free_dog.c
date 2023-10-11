#include "dog.h"
/**
 * free_dog - function that frees dogs.
 * @d: dog_t pointer
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
