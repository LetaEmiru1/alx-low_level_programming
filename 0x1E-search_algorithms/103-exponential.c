#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search_print - Helper function to perform binary search and print each subarray
 * @array: Pointer to the first element of the array to search in
 * @left: Starting index of the subarray to search in
 * @right: Ending index of the subarray to search in
 * @value: Value to search for
 *
 * Return: The first index where value is located or -1 if not found
 */
static int binary_search_print(int *array, size_t left, size_t right, int value)
{
    size_t mid;

    while (left <= right)
    {
        mid = left + (right - left) / 2;

        printf("Searching in array: ");
        for (size_t i = left; i <= right; i++)
        {
            printf("%d", array[i]);
            if (i < right)
                printf(", ");
        }
        printf("\n");

        if (array[mid] == value)
            return (int)mid;
        if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers using
 * the Exponential search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 if not found or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t index = 1;

    if (!array)
        return (-1);

    /* Quickly find range where element may be present */
    while (index < size && array[index] < value)
    {
        printf("Value checked array[%zu] = [%d]\n", index, array[index]);
        index *= 2;
    }

    /* Call binary search on found range */
    return binary_search_print(array, index / 2, (index < size ? index : size - 1), value);
}

