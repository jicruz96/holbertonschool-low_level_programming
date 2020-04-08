#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns the number of elements in a linked list
 *
 * @h: list to check
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	/**
	 * CODE BLOCK #0 - VARIABLES
	 * n keeps track of the length of the list.
	 *	> n will be incremented each time we access a new element.
	 */
	int n = 0;

	/**
	 * CODE BLOCK #1 - COUNT LIST LENGTH
	 * While our pointer is not null:
	 *	a. access the next element;
	 *	b. increment n;
	 */
	while (h != NULL)
	{
		h = h->next;				/*1a*/
		n++;					/*1b*/
	}

	/* When done, return n */
	return (n);
}
