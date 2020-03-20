#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_list - frees a list of its allocated memory
 *
 * @head: list to be printed
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
	free(head->str);
	free(head);
}
