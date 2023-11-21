#include "lists.h"

/**
 *print_listint- prints the list of integers.
 *@h: pointer to the list
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
