#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: listint_t double_pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *new;

	new = *head;

	if (head == NULL)
		return;

	while (new != NULL)
	{
		temp = new->next;
		free(new);
		new = temp;
	}

	*head = new;
}
