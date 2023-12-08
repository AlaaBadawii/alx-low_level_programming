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

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));
	while (current != NULL && i < idx)
	{
		current = current->next;
		i++;
	}
	if (i < idx)
	{
		free(new);
		return (NULL);
	}
	if (current == NULL)
		return (add_dnodeint_end(h, n));

	new->next = current;
	new->prev = current->prev;
	current->prev = new;
	if (new->prev != NULL)
		new->prev->next = new;
	else
		*h = new;

	return (new);
}
