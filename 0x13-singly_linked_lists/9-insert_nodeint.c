#include "lists.h"
#include <stdlib.h>
/**
 * inset_nodeint_at_index - inserts a new node at a given position
 *
 * @head: pointer to head of linked list
 * @idx: index of the node, starting at 0
 * @n: number to store in new node
 *
 * Return: the address of the node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *tmp;

	if (new == NULL || head == NULL)
		return (NULL);

	tmp = *head;
	new->n = n;

	for (i = 0; i < idx - 1; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL); 
	}

	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
