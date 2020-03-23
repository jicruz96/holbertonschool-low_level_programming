#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beggining of a linked list
 *
 * @head: pointer to (head of) linked list
 * @n: number to store in new node
 *
 * Return: address of new element, or NULL if malloc fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
