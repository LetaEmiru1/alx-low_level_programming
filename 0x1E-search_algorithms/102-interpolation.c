#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - Searches for a value using Interpolation search.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Description: Utilizes a position formula to guess the likely position
 * of the target value, adjusting the search range based on comparison.
 * Prints every value checked and manages range errors.
 * Return: The first index where value is located, or -1 if not found or array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
    size_t low = 0, high = size - 1, pos;

    if (!array)
        return (-1);

    while (low <= high && value >= array[low] && value <= array[high])
    {
        if (low == high)
        {
            if (array[low] == value)
                return (int)low;
            return -1;
        }

        /* Avoid division by zero in calculation */
        if (array[high] == array[low])
            break;

        /* Calculate position to check */
        pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

        if (pos >= size)
        {
            printf("Value checked array[%zu] is out of range\n", pos);
            return -1;
        }

        printf("Value checked array[%zu] = [%d]\n", pos, array[pos]);

        if (array[pos] == value)
            return (int)pos;
        if (array[pos] < value)
            low = pos + 1;
        else
            high = pos - 1;
    }

    return -1;
}

