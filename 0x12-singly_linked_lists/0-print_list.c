#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of list_t.
 * @h:  list.
 *
 * Return: The number of nodes in h.
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		counter++;
		h = h->next;
	}

	return (counter);
}
