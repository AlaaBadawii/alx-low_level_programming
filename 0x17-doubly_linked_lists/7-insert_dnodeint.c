#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: double pointer to the node head
 * @idx: unsigned int input
 * @n: data value
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int i;

	current = *h;
	i = 0;

	while (current != NULL && i < idx)
	{
		current = current->next;
		i++;
	}

	if (i < idx)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = current;
	new->prev = current->prev;
	current->prev = new;
	if (new->next != NULL)
		new->prev->next = new;

	return (new);
}
