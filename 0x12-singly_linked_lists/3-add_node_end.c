#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: list_t double pointer
 * @str: char pointer
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	unsigned int len;

	temp = (*head);
	len = 0;

	while (str[len] != '\0')
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->next = NULL;
	new->len = len;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;

	return (new);
}
