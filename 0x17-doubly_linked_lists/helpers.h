#ifndef HELPERS_H
#define HELPERS_H

/* FUNCTION DEFINITIONS */
/**
 * get_head - sets a dlistint_t pointer to start of list
 * @ptr: pointer to list
 * Return: 1 + number of nodes traversed | 0 if no list exists
 **/
int get_head(const dlistint_t **ptr)
{
	int num_nodes = 0;

	/* If the list exists, go to the beginning. Count as you go */
	if (ptr && *ptr)
		for (num_nodes = 1; (*ptr)->prev != NULL; num_nodes++)
			*ptr = (*ptr)->prev;

	/* Return number of nodes found */
	return (num_nodes);
}

/**
 * get_tail - sets a dlistint_t pointer to end of list
 * @ptr: pointer to list
 * Return: 1 + number of nodes traversed | 0 if no list exists
 **/
int get_tail(const dlistint_t **ptr)
{
	int num_nodes = 0;

	/* If the list exists, go to the beginning. Count as you go */
	if (ptr && *ptr)
		for (num_nodes = 1; (*ptr)->next != NULL; num_nodes++)
			*ptr = (*ptr)->next;

	/* Return number of nodes found */
	return (num_nodes);
}

/**
 * traverse - traverses through n nodes of a list
 * @ptr: pointer to list
 * @n: number of nodes to traverse
 * Return: address to new node | NULL if list doesn't exist
 **/
const dlistint_t *traverse(const dlistint_t *ptr, int n)
{
	/* If the list does not exist... */
	if (ptr == NULL)
		return (NULL);

	/* Traverse through the list. If n < 0, traverse backward */
	if (n < 0)
		for (; ptr != NULL && n != 0; n++)
			ptr = ptr->prev;
	else
		for (; ptr != NULL && n != 0; n--)
			ptr = ptr->next;

	/* Return the node you're pointing at */
	return (ptr);
}

#endif /* HELPERS_H */
