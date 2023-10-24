#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: listint_t double_pointer input
 * Return: head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *new;

	if (*head == NULL)
		return (0);

	new = *head;
	n = (*head)->n;
	*head = (*head)->next;

	free(new);

	return (n);
}


