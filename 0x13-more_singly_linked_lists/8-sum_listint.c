#include "lists.h"
/**
 * sum_listint - To get the sum of integers in a list.
 * @head: A pointer to the list.
 * Return: To return the sum of all integers.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
