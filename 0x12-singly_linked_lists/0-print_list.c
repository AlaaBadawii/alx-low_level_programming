#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: list_t pointer
 * Return: number of lists.
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");

			h = h->next;

			num++;
		}
		else
		{

			printf("[%u] %s\n", h->len, h->str);

			num++;

			h = h->next;
		}
	}

	return (num);
}
