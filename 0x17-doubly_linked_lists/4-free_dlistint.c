#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: dlistint_t pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *current;

	current = head;
	while (current != NULL)
	{
		temp = current;
		free(current);
		current = temp->next;
	}
}

