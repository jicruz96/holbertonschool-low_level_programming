#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * pop_listint2 - deletes the head node of a listint_t & returns its datum
 *
 * @head: list to be freed
 *
 * Return: number stored in deleted note; 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *tmp;

	if (*head != NULL)
	{
		n = (*head)->n;
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	return (n);	
}
