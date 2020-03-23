#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint2 - frees a list of its allocated memory
 *
 * @head: list to be freed
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp1, *tmp2;

	if (head == NULL || *head == NULL)
		return;

	tmp1 = *head;
	*head = NULL;

	while (tmp1 != NULL)
	{
		tmp2 = tmp1->next;
		free(tmp1);
		tmp1 = tmp2;
	}
	
}
