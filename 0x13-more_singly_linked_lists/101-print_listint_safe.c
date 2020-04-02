#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints all the nodes of a list; avoids infinite loops
 *
 * @head: head pointer to list to be printed
 *
 * Return: the number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	int n = 0, tmp = 1, hops = 1;
	const listint_t *tortoise, *hare;

	if (head == NULL)
		exit(98);

	for (tortoise = head; hops == tmp; tmp++, hops++, tortoise = head)
	{
		hare = head;

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

	for (; tortoise && --tmp; n++)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		tortoise = tortoise->next;
	}

	if (hare)
		printf("-> [%p] %d\n", (void *)hare, hare->n);

	return (n);
}
