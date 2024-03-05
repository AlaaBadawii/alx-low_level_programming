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
        if(d == NULL)
                printf("(nil)\n");
        else
        {
                if (d->name == NULL)
                        printf("Name: (nil)\n");
                else
                        printf("Name: %s\n", d->name);

                if (d->age <= 0)
                        printf("Age: (nil)\n");
                else
                        printf("Age: %.1f\n", d->age);

                if (d->owner == NULL)
                        printf("Owner: (nil)\n");
                else
                        printf("Owner: %s\n", d->owner);
        }
}
