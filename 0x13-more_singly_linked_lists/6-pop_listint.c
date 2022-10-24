#include "lists.h"
/**
 * pop_listint - To remove a node from the top.
 * @head: A pointer to the list.
 * Return: return i to remove from the head.
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	i = (*head)->n;
	*head = (*head)->next;
	free(tmp);

	return (i);
}
