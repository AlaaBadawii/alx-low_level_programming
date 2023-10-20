#include "lists.h"
/**
 * list_len -  function that returns the number of elements in a linked list_t list.
 * @h: list_t pointer
 * Return: number of elements in a linked
 */
size_t list_len(const list_t *h)
{
	size_t element_num = 0;

	while (h->next != NULL)
	{
		h = h->next;
		element_num++;
	}

	return (element_num);
}

