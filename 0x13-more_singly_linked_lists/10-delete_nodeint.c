#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list
 * @head: listint_t double_pointer
 * @index: unsigned int input
 * Return: 0 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	curr = *head;

	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (curr->next == NULL)
			return (-1);

		curr = curr->next;
	}


	temp = curr->next;
	curr->next = temp->next;
	free(temp);

	return (1);
}
