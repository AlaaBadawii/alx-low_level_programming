#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: dlistint_t pointer to head
 * @index: node index
 * Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *nth_node = head;

	while (nth_node != NULL && i < index)
	{
		nth_node = nth_node->next;
		i++;
	}
	if (nth_node == NULL)
		return (NULL);
	return (nth_node);
}
