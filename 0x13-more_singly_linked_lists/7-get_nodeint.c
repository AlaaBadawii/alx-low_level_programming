#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list.
 * @head: listint_t pointer
 * @index: unsigned int input
 *
 * Return: the nth node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr;
	unsigned int count;

	curr = malloc(sizeof(listint_t));
	curr = head;
	count = 0;

	if (head == NULL)
		return (NULL);

	while (curr != NULL)
	{
		if (count == index)
			return (curr);
		curr = curr->next;
		count++;
	}

	return (NULL);
}
