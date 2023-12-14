#include "search_algos.h"

/**
 * linear_skip - using linear skip algorithm to search in singly
 * 		 linked list
 * @list: the head pointer
 * @value: the value to search for
 * Return: a pointer to the first node value or NULL
 */


skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *current = list, *express;

    if (list == NULL)
        return NULL;

    express = list->express;

    while (express != NULL && express->n < value) {
        printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
        current = express;
        express = express->express;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", current->index, express ? express->index : 0);

    while (current != NULL && current->index < express->index) {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

        if (current->n == value) {
            printf("Found %d at index: %lu\n", value, current->index);
            return current;
        }

        current = current->next;
    }

    printf("Value not found in the skip list\n");
    return NULL;
}
