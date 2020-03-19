#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns the number of elements in a linked list
 *
 * @list_t: list to check
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	/**
	 * CODE BLOCK #0 - VARIABLES
	 * n keeps track of the length of the list.
	 * 	> n = 1 at first because all lists are at least 1.
	 *	> n will be incremented each time we access a new element.
	 */
	size_t n = 1;

	/**
	 * CODE BLOCK #1 - COUNT LIST LENGTH
	 * While there is a pointer ahead of us:
	 * 	a. access the next element;
	 * 	b. increment n;
	 */
	while (h->next != NULL)
	{
		h = h->next;				/*1a*/
		n++;					/*1b*/
	}

	/* When done, return n */
	return (n);
}
