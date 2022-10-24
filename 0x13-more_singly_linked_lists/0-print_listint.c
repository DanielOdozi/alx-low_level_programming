#include "lists.h"
/**
 * print_listint - prints all the element of a list_t list.
 * @h: pointer to the list.
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		j++;
		h = h->next;
	}

	return (j);
}
