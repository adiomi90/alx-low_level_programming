#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: Pointer to the first node where the value is located, or NULL if not found.
 */
skiplist_t *linear_skip(skiplist_t *list, int value) {
    skiplist_t *current, *express;

    if (list == NULL)
        return NULL;

    current = list;
    express = list->express;

    while (express != NULL) {
        printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);

        if (express->n >= value || express->express == NULL) {
            printf("Value found between indexes [%lu] and [%lu]\n",
                   current->index, express->index);

            while (current != NULL && current->index <= express->index) {
                printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

                if (current->n == value) {
                    printf("Found %d at index: %lu\n", value, current->index);
                    return current;
                }

                current = current->next;
            }

            break;  /* Value not found or found in regular lane */
        }

        current = express;
        express = express->express;
    }

    printf("Value not found in the skip list\n");
    return NULL;
}
