#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: pointer to listint_t
 *
 * Return: count
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (len);
}
