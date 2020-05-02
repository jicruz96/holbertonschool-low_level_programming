#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: head pointer to list
 * @index: node to return (where 0 is first)
 * Return: requested node | NULL if node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/* If the list does not exist... */
	if (head == NULL)
		return (NULL);

	/* Traverse through the list.*/
	for (; head != NULL && index != 0; index--)
		head = head->next;

	/* Return the node you're pointing at */
	return (head);
}
