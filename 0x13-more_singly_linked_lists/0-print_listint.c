#include "lists.h"

/**
 *print_listint- prints the list of integers.
 *@h: pointer to the list
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned long new;

	size_t count = 0;

	while (h)
	{
		new = h->n;
		printf("%lu\n", new);
		h = h->next;
		count++;
	}
	return (count);
}
