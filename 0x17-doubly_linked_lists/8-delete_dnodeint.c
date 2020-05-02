#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the new node at a given position
 * @head: head pointer to list
 * @index: node to be deleted (where 0 is the first)
 * Return: 1 if successful | -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;

	if (*head == NULL)
		return (-1);

	while (ptr && index--)
		ptr = ptr->next;

	if (ptr == NULL)
		return (-1);

	if (ptr->prev)
		(ptr->prev)->next = ptr->next;
	if (ptr->next)
		(ptr->next)->prev = ptr->prev;
	if (ptr == *head)
		*head = (*head)->next;

	free(ptr);
	return (1);
}
