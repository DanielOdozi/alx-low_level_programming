#include "lists.h"

int len_str(char *s);

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the first element of the list.
 * @str: string to set in the new node.
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail;
	list_t *t = *head;

	tail = malloc(sizeof(list_t));
	if (tail == NULL)
		return (NULL);

	tail->str = strdup(str);
	if (!tail->str)
	{
		free(tail);
		return (NULL);
	}
	tail->len = len_str(tail->str);
	tail->next = NULL;

	if (t)
	{
		while (t->next)
			t = t->next;
		t->next = tail;
	}
	else
		*head = tail;

	return (tail);
}
/**
 * len_str - returns the length of a string.
 * @s: string.
 * Return: length of @s.
 */
int len_str(char *s)
{
	int i;

	i = strlen(s);
	return (i);
}
