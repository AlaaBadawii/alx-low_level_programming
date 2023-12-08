#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: double pointer to head
 * @index: index
 * Return 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	i = 0;
	while (current != NULL && i < index)
	{
		i++;
		current = current->next;
	}

	if (i < index)
	{
		return (-1);
	}

	if (current->next != NULL)
		current->next->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = current->next;
	else
		*head = current->next;
	free(current);

	return (1);
}
