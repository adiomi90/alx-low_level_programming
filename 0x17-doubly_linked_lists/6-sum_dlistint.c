#include "lists.h"

/**
 * sum_dlistint - Returns sum of all data 
 * @head: pointer to head of
 * Return: Return 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
