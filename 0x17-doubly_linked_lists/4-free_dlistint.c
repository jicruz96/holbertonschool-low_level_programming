#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head pointer to list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{

	while (head && head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
