#include "lists.h"

/**
 *add_nodeint_end- appends node
 *@head: pointer to the list
 *@n: the integer to be appended.
 *Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
        listint_t *new;
	listint_t *last;

        new = malloc(sizeof(listint_t));

        if (new == NULL)
        {
                return (NULL);
        }
        new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while(last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
        return (new);
}
