#include <stdio.h>
#include "dog.h"
/**
 * print_dog -  function that prints a struct dog.
 * @d: struct dog pointer
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d->age == 0)
		printf("age: (nil)\n");

	printf("Name: %s\n", d->name);
	printf("age: %f\n", d->age);
	printf("owner: %s\n", d->owner);
}
