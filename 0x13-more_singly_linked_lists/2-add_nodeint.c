#include "lists.h"
/**
 * *add_nodeint - adds a new node at the beginning.
 * @head: Pointer to the first element.
 * @n: integer to set to new node;
 * Return: returns the newnode at the top of the elemnt.
 */
listint_t *add_nodeint(listint_t **head,  const int n)
{
	listint_t *addnode;

	addnode = malloc(sizeof(listint_t));
	if (addnode == NULL)
		return (NULL);

	addnode->n = n;
	addnode->next = *head;
	*head = addnode;

	return (addnode);
}
