#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_nodeint_end - adds a new node at the end of a linked list
 *
 * @head: pointer to (head of) linked list
 * @n: number to store in new node
 *
 * Return: address of new element, or NULL if malloc fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *tmp1;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		for (tmp1 = *head; tmp1->next != NULL; tmp1 = tmp1->next)
			;
		tmp1->next = new;
	}
	return (new);
}
