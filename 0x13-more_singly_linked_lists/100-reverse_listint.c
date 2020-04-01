#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 *
 * @head: pointer to head pointer of list
 *
 * Return: new head pointer to reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *nextNode, *newHead;

	if ((*head)->next == NULL)
		return (*head);

	nextNode = (*head)->next;
	newHead = reverse_listint(&nextNode);
	((*head)->next)->next = *head;
	(*head)->next = NULL;
	*head = newHead;
	return (newHead);
}
