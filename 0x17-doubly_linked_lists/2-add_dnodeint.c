#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning
 * @head: double_pointer to the head of the node
 * @n: int input
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current, *new_node;

	current = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = current;
	new_node->prev = NULL;


	if (current != NULL)
		current->prev = new_node;

	(*head) = new_node;

	return (*head);
}

