#include <stdio.h>
#include <math.h>


/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where value is located,
 *         or NULL if value is not present in list or if head is NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *current = list, *express;

    if (list == NULL)
        return NULL;

    express = list->express;
    while (express != NULL && express->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
        current = express;
        express = express->express;
    }

    printf("Value found between indexes [%lu] and [%lu]\n",
           current->index, express ? express->index : current->index);
    
    current = current->next;
    while (current != NULL && current->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        current = current->next;
    }

    if (current != NULL && current->n == value)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        return current;
    }

    return NULL;
}
