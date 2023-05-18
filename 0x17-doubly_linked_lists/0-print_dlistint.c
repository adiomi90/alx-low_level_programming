#include "lists.h"

/**
 * print_dlistint - prints all the elements
 * @h: node of the link list
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (x);
}
