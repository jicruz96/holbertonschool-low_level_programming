#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head pointer to list
 * @idx: position in list to insert node (starts at 0)
 * @n: number to store in node
 * Return: address of the new node | NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *ptr = *h;

	if (new == NULL || (*h == NULL && idx))
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*h == NULL)
	{
		*h = new;
		return (new);
	}

	while (ptr->next && --idx)
		ptr = ptr->next;

	if (idx)
	{
		free(new);
		return (NULL);
	}

	if (ptr->next)
	{
		new->next = ptr->next;
		(ptr->next)->prev = new;
	}
	new->prev = ptr;
	ptr->next = new;
	return (new);
}
