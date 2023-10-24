#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: listint_t double_pointer input
 * @idx: unsigned int input
 * @n: int input
 *
 * Return:  address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *curr;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	curr = *head;

	if (idx == 0)
	{
		new->next = curr;
		*head = new;
		return (*head);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (curr == NULL || curr->next == NULL)
			return (NULL);

		curr = curr->next;
	}

	new->next = curr->next;
	curr->next = new;

	return (new);
}
