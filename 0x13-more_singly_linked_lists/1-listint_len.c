#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - returns the number of elements in a linked list
 *
 * @h: list to check
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int n;

	for (n = 0; h != NULL; n++)
		h = h->next;
	return (n);
}
