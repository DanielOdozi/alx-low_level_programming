#include "lists.h"
/**
 * listint_len - list number of elemnets in a list
 * @h: A pointer to the header.
 * Return: rrturns the number of element in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
