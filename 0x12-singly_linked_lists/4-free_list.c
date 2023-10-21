#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: list_t pointer
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->next);
		free(temp);
	}
}
