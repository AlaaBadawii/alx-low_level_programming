#include "lists.h"
/**
 * listint_len - that returns the number of elements
 * in a linked listint_t list.
 * @h: listint_t pointer
 *
 * Return: len.
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
