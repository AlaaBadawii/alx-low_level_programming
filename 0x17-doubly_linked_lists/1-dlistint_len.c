#include "lists.h"
/**
 * dlistint_len -  function that returns the number of elements
 * in a linked dlistint_t list.
 * @h: pointer to the head of the list
 * Return: count
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}

	return (count);
}
