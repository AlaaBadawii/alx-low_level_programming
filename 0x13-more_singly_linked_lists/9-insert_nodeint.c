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
	listint_t *new, *temp, *curr;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	curr = *head;
	i = 0;

	if (idx == 0)
	{
		new->next = curr;
		*head = new;
		return (*head);
	}
	while (curr != NULL && i < idx - 1)
	{
		i++;
		curr = curr->next;
	}

	if (curr == NULL)
		return (NULL);

	temp = curr->next;
	curr->next = new;
	new->next = temp;

	return (*head);
}
