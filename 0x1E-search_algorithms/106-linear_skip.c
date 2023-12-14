include "search_algos.h"

skiplist_t *linear_skip(skiplist_t *list, int value) {
    skiplist_t *current = list, *express;

    if (list == NULL)
        return NULL;

    express = list->express;

    while (express != NULL && express->n < value) {
        printf("Value checked at index [%lu] = [%d]\n", express->express - list, express->n);
        current = express;
        express = express->express;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", current - list, express - list);

    while (current != NULL && current->n < value) {
        printf("Value checked at index [%lu] = [%d]\n", current - list, current->n);
        current = current->next;
    }

    if (current != NULL && current->n == value) {
        printf("Value checked at index [%lu] = [%d]\n", current - list, current->n);
        return current;
    }

    return NULL;
}

