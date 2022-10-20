#include "lists.h"

int len_str(char *c);

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the first element of the list.
 * @str: string to set in the new node.
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	if (!newnode->str)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = len_str(newnode->str);
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
/**
 * len_str - returns the length of a string.
 * @c: string.
 * Return: length of @c'
 */
int len_str(char *c)
{
	int i;

	i = strlen(c);
	return (i);
}
