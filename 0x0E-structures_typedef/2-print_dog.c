#include <stdio.h>
#include "dog.h"
/**
 * print_dog -  function
 * @d: struct dog pointer
 *
 * Description: function that prints a struct dog.
 * Return: ptr to struct dog.
 */
void print_dog(struct dog *d)
{
	struct dog;

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
