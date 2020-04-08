#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint - frees a list of its allocated memory
 *
 * @head: list to be freed
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
