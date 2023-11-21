#include "lists.h"
/**
 *listint_len- counts the length of a list
 *@h: pointer to the list
 *Return: length of list
 */
size_t listint_len(const listint_t *h)
{

	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
