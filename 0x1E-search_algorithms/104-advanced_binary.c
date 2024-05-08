#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - Prints an array or subarray
 * @array: Pointer to the first element of the array
 * @left: Starting index of the subarray
 * @right: Ending index of the subarray
 */
void print_array(int *array, size_t left, size_t right)
{
    printf("Searching in array: ");
    for (size_t i = left; i <= right; i++)
    {
        printf("%d", array[i]);
        if (i < right)
            printf(", ");
    }
    printf("\n");
}

/**
 * recursive_binary_search - Helper function to perform the binary search recursively
 * @array: Pointer to the first element of the array to search in
 * @left: Left boundary of the search
 * @right: Right boundary of the search
 * @value: Value to search for
 * Return: The first index where value is located or -1 if not found
 */
int recursive_binary_search(int *array, size_t left, size_t right, int value)
{
    if (right >= left)
    {
        size_t mid = left + (right - left) / 2;

        print_array(array, left, right);

        // Check if the middle element is the first occurrence
        if ((mid == left || value > array[mid - 1]) && array[mid] == value)
            return mid;

        // If the value is smaller than or equal to mid, it can only be in the left subarray
        if (value <= array[mid])
            return recursive_binary_search(array, left, mid, value);

        // Else the value can only be in the right subarray
        return recursive_binary_search(array, mid + 1, right, value);
    }
    return -1;
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: The first index where value is located, or -1 if not found or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    return recursive_binary_search(array, 0, size - 1, value);
}

