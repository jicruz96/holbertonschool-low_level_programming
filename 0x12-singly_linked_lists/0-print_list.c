#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all the elements of a list
 *
 * @h: list to be printed
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;	/* n will store the number of elements we print */

	/**
	 * CODE BLOCK #1 - PRINT ALL ELEMENTS
	 *
	 * While the pointer you're at is not NULL:
	 *	a. print the element you're pointing at;
	 *		b. if the string is null, print [0] (nil) instead;
	 *	c. then point to the next element;
	 *	d. increment n to store how many elements you've printed;
	 *
	 */
	while (h != NULL)
	{
		if (h->str != NULL)				/*1a*/
			printf("[%u] %s\n", h->len, h->str);
		else						/*1b*/
			printf("[0] (nil)\n");
		h = h->next;					/*1c*/
		n++;						/*1d*/
	}
	return (n);						/*2d*/
}
