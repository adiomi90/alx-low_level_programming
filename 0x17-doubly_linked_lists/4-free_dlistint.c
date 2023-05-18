#include "lists.h"

/**
 * free_dlistint - free the list
 * @head: pointer to head of the list
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	while (head && head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
