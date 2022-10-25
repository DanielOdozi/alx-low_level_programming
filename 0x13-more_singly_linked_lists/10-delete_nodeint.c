#include "lists.h"
/**
 * delete_nodeint_at_index - To delete the node at index of a listint_t.
 * @head: A pointer to the node.
 * @index: The index to be del.
 * Return: return the deleted node.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *delete, *last;
	unsigned int i = 0;

	while (temp && i <= index)
	{
		if (i == index)
		{
			if (index == 0)
			{
				delete = *head;
				*head = (*head)->next;
				free(delete);
			}
			else
			{
				delete = temp;
				temp = temp->next;
				free(delete);
				last->next = temp;
			}
			return (1);
		}
		else if (i + 1 == index)
			last = temp;
		temp = temp->next;
		i++;
	}
	return (-1);
}
