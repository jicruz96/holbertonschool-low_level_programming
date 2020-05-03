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

	/**
	 * EDGE CASES - Check if:
	 * 1. malloc failed 
	 * OR
	 * 2. node is to be inserted as non-first node in an empty list
	 **/
	if (new == NULL || (*h == NULL && idx))
		return (NULL);

	/* Create node */
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	/* EDGE CASE: If idx is 0, set new->next to head and head to new */
	if (idx == 0)
	{
		if (*h)
		{
			new->next = *h;
			(*h)->prev = new;
		}
		*h = new;
		return (new);
	}

	/* Traverse to index OR end of list */
	while (--idx && ptr->next)
		ptr = ptr->next;

	/**
	 * EDGE CASE
	 * 	If at end of list, but not at index, insertion is impossible.
	 * 	Free new and return
	 **/
	if (idx)
	{
		free(new);
		return (NULL);
	}

	/* if there's another node, have new point to it and have it point to new */
	if (ptr->next)
	{
		new->next = ptr->next;
		(ptr->next)->prev = new;
	}

	/* Set new->prev to current pointer and current pointer's next to new */
	new->prev = ptr;
	ptr->next = new;

	return (new);
}
