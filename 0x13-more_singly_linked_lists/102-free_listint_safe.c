#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - frees a linked list; avoids infinite loops
 *
 * @head: head pointer to list to be printed
 *
 * Return: the number of nodes
 */

size_t free_listint_safe(listint_t **head)
{
	int n = 0, tmp = 1, hops = 1;
	listint_t *tortoise, *hare;

	if (head == NULL || *head == NULL)
		return (0);

	for (tortoise = *head; hops == tmp; tmp++, hops++, tortoise = *head)
	{
		hare = *head;

		while (hare && hops--)
			hare = hare->next;

		if (hare == NULL)
		{
			tmp++;
			break;
		}

		for (hops = 0; tortoise != hare; hops++)
			tortoise = tortoise->next;
	}

	for (; head && --tmp; n++)
	{
		tortoise = (*head)->next;
		free(*head);
		if (tmp == 1)
			*head = NULL;
		else
			*head = tortoise;
	}

	return (n);
}
