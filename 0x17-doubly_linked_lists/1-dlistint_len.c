#include "lists.h"
#include "helpers.h"

/**
 * dlistint_len - returns number of nodes in a dlistint_t list
 * @h: head pointer to list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num_nodes = 0; /* number of nodes variable */
	int list_exists;   /* checks if list exists, using return from get_head */

	/* Go to head of list. if list doesn't exist, get_head will return 0 */
	list_exists = get_head(&h);

	/* If list exists, go to tail. get_tail returns the number of nodes */
	if (list_exists)
		num_nodes = get_tail(&h);

	return (num_nodes);
}
