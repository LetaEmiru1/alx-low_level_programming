#include "search_algos.h"

/**
 * print_block - Prints the block where a possible value could be
 * @prev: Pointer to the start node of the block
 * @current: Pointer to the end node of the block or NULL
 */
void print_block(listint_t *prev, listint_t *current)
{
    printf("Value found between indexes [%lu] and [%lu]\n",
           prev->index, current ? current->index : (prev->index + 1));
    while (prev != current->next && prev)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        prev = prev->next;
    }
}

/**
 * jump_list - Searches for a value in a sorted list of integers using Jump search algorithm
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in the list
 * @value: Value to search for
 * Return: Pointer to the first node where value is located, or NULL if not present or list is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    if (!list)
        return (NULL);

    size_t step = (size_t) sqrt(size);
    listint_t *prev = list;
    listint_t *current = list;

    /* Move in steps of 'step' until finding the block where value could be or reaching the end of the list */
    while (current && current->n < value)
    {
        prev = current;
        for (size_t i = 0; i < step && current->next; i++)
            current = current->next;

        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
    }

    /* Perform a linear search in the block identified */
    print_block(prev, current);

    while (prev != current->next && prev)
    {
        if (prev->n == value)
            return (prev);
        prev = prev->next;
    }

    return (NULL);  /* If value not found */
}

