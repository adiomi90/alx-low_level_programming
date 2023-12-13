#include "search_algos.h"

/**
 * jump_list - Searches for an algorithm in a sorted singly
 *             linked list of integers using jump search.
 * @list: A pointer to the  head of the linked list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 *
 * Description: Prints a value every time it is compared in the list.
 *              Uses the square root of the list size as the jump step.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *temp = list;
	listint_t *step = NULL;
	listint_t *prev = NULL;
	size_t jump;

	if (!list || size == 0)
		return (NULL);

	jump = sqrt(size);

	while (temp)
	{
		prev = temp;
		while (temp->next && temp->index < jump)
			temp = temp->next;
		printf("Value checked at index [%lu] = [%d]\n",
			temp->index, temp->n);
		if (temp->n >= value || temp->index == size - 1)
		{
			step = temp;
			printf("Value found between indexes [%lu] and [%lu]\n",
			       prev->index, step->index);
			break;
		}
		jump += sqrt(size);
	}
	while (prev && prev->index <= step->index)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
