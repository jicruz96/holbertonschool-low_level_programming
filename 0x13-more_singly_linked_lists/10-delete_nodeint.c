#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes specified node of a listint_t linked list
 *
 * @head: pointer to head of linked list
 * @index: index of the node to be deleted (index begins at 0)
 *
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *tmp2;

	if (head == NULL || *head == NULL)
		return (-1);

	tmp = *head;

	for (i = 0; i + 1 < index; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (-1);
	}

	if (i != 0)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp2 = (tmp->next)->next;
		free(tmp->next);
		tmp->next = tmp2;
	}
	else
	{
		*head = tmp->next;
		free(tmp);
	}

	return (1);
}
