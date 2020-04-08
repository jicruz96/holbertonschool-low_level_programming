#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a listint_t list
 *
 * @head: pointer to head of linked list
 *
 * Return: sum of data, or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int n = 0;

	while (head != NULL)
	{
		n += head->n;
		head = head->next;
	}

	return (n);
}
