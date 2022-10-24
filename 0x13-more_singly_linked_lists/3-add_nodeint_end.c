#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end of the list.
 * @head: pointer to the first element on the list.
 * @n: integer set to new node.
 * Return: Address of the new element or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tail;
	listint_t *i = *head;

	tail = malloc(sizeof(listint_t));
	if (tail == NULL)
		return (NULL);

	tail->n = n;
	tail->next = NULL;

	if (!*head)
	{
		*head  = tail;
		return (tail);
	}
	while (i->next)
	{
		i = i->next;
	}

	i->next = tail;

	return (tail);
}
