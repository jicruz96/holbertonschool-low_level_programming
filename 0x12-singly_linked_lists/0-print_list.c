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
	 * CODE BLOCK #1 - PRINT ALL BUT THE LAST ELEMENT
	 *
	 * While there are elements left:
	 *	a. print the element you're pointing at;
	 *		b. if the string is null, print [0] (nil) instead;
	 *	c. then point to the next element;
	 *	d. increment n to store how many elements you've printed;
	 *
	 * NOTE: THIS WILL NOT PRINT THE LAST ELEMENT. CODE BLOCK 2 DOES.
	 */
	while (h->next != NULL)
	{
		if (h->str != NULL)				/*1a*/
			printf("[%u] %s\n", h->len, h->str);
		else						/*1b*/
			printf("[0] (nil)\n");
		h = h->next;					/*1c*/
		n++;						/*1d*/
	}

	/**
	 * CODE BLOCK #2 - PRINT THE LAST ELEMENT & RETURN
	 *
	 * a. Print the last element;
	 *	b. if the string is null, print [0] (nil) instead;
	 * c. then increment n once more to record the print;
	 * d. We're done! Return n.
	 */
	if (h->str != NULL)					/*2a*/
		printf("[%u] %s\n", h->len, h->str);
	else							/*2b*/
		printf("[0] (nil)\n");
	n++;							/*2c*/
	return (n);						/*2d*/
}
