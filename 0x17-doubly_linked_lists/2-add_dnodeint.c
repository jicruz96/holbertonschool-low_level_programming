#include "lists.h"
/*****************************************************************************/
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head pointer to list
 * @n: number to store in the new node
 * Return: address of new node | NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = make_node(n);

	if (new == NULL)
		return (NULL);

	if (*head)
	{
		new->next = *head;
		(*head)->prev = new;
	}

	*head = new;

	return (new);
}

/**
 * make_node - makes a new dlistint node
 * @n: number to insert into node
 * Return: address to node | NULL if malloc fails
 **/
dlistint_t *make_node(const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}
