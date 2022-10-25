#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head node
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = *head, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next)
	{
		*head = (*head)->next;
		temp->next = NULL;
	}
	else
		return (*head);

	while ((*head)->next)
	{
		next = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = next;
	}
	if ((*head)->next == NULL)
		(*head)->next = temp;

	return (*head);
}
