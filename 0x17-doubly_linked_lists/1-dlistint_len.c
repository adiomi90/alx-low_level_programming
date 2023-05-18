#include "lists.h"

/**
 * dlistint_len - Returns the number of element
 * @h: A node for the DLL
 *
 * Return: number of element
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
