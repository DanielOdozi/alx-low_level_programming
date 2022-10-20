#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: pointer to the list.
 */
void free_list(list_t *head)
{
	list_t *at;
	list_t *nt;

	if (head)
	{
		at = head;
		nt = head->next;
		while (nt)
		{
			free(at->str);
			free(at);
			at = nt;
			nt = nt->next;
		}
		free(at->str);
		free(at);
	}
}
