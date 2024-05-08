#include "search_algos.h"
#include <stdio.h>
#include <math.h> /* Required for sqrt() */

/**
 * jump_search - Searches for a value in an array using the jump search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in the array.
 * @value: value to search for.
 *
 * Description: Uses a block size of sqrt(size) to jump through the sorted array.
 * Prints each value checked and the range where the value might be.
 * If array is NULL, returns -1 immediately.
 * Return: the first index where value is located, or -1 if not present.
 */
int jump_search(int *array, size_t size, int value)
{
    size_t jump = sqrt(size);
    size_t left = 0;
    size_t right = jump;

    if (!array)
        return (-1);

    while (left < size && array[left] <= value)
    {
        printf("Value checked array[%zu] = [%d]\n", left, array[left]);
        if (array[left] == value)
            return (int)left;

        if (array[right] >= value || right >= size)
            break;

        left = right;
        right += jump;
        if (right > size)
            right = size;
    }

    printf("Value found between indexes [%zu] and [%zu]\n", left, right);

    for (size_t i = left; i < right && i < size; i++)
    {
        printf("Value checked array[%zu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (int)i;
    }

    return (-1);
}

