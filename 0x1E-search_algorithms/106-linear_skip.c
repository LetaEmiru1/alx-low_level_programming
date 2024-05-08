#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: Pointer to the first node where value is located, or NULL if not found or list is NULL.
 *
 * Description: Uses an express lane to skip through nodes quickly before doing a detailed search.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *current = list;

    if (!list)
        return (NULL);

    /* Traverse the express lane first */
    while (current->express && current->express->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->express->index, current->express->n);
        current = current->express;
    }

    /* Check and print the last or potential node in express lane */
    if (current->express)
        printf("Value checked at index [%lu] = [%d]\n", current->express->index, current->express->n);

    /* Define the range to perform detailed search */
    printf("Value found between indexes [%lu] and [%lu]\n",
           current->index, current->express ? current->express->index : current->index);

    /* Perform linear search in the identified range */
    skiplist_t *start = current;
    while (start && start->index <= (current->express ? current->express->index : current->index))
    {
        printf("Value checked at index [%lu] = [%d]\n", start->index, start->n);
        if (start->n == value)
            return (start);
        start = start->next;
    }

    return (NULL); /* Return NULL if value not found */
}

