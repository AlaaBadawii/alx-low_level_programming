#include "lists.h"
/**
 * sum_dlistint -  returns the sum of all the data (n)
 * @head: head of the node
 * Return: sum of all the data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
