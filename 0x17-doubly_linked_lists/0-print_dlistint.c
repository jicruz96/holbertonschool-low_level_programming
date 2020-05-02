#include "lists.h"
#include "helpers.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to list to be printed. *should* point to head node
 * Return: number of nodes
 **/
size_t print_dlistint(const dlistint_t *h)
{
	int num_nodes = 0; /* number of nodes variable */
	int list_exists;   /* stores return from get_head. */

	/**
	 * Just to be safe, use get_head to make sure
	 * we're actually at the head of the list.
	 * If get_head returns 0, there is no list
	 **/
	list_exists = get_head(&h);
	if (list_exists)
	{
		while (h != NULL)
		{
			/* Increment num_nodes */
			num_nodes++;

			/* Print the value stored in the current node */
			printf("%d\n", h->n);

			/* Traverse to the next node */
			h = traverse(h, 1);
		}
	}

	/* return num_nodes */
	return (num_nodes);
}
