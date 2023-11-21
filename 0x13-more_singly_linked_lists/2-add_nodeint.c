#include "lists.h"

/**
 *add_nodeint- prepends a new node to a given list
 *@n: integer that will be added to the list
 *@head: pointer to the list.
 *Return: address if success, NULL of failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
