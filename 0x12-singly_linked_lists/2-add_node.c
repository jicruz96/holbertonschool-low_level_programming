#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beggining of a linked list
 *
 * @head: pointer to (head of) linked list
 * @str: new node to add to beginning of linked list
 *
 * Return: address of new element, or NULL if malloc fails
 */

list_t *add_node(list_t **head, const char *str)
{
	/**
	 * CODE BLOCK #0 - VARIABLES
	 * "new" is a pointer to the new node we're adding to the list.
	 * "len" captures the string length of str.
	 */
	list_t *new = malloc(sizeof(list_t));
	unsigned int len;

	if (new == NULL)
		return (NULL);
	/**
	 * CODE BLOCK #1 - MAKE A NEW NODE
	 * Populate the "new" struct with:
	 *	a. str in its str data type;
	 *	b. the length of str in the len data type by;
	 *		b1. incrementing len for every char before the null byte;
	 *		b2. making new->len equal to len.
	 *	c. the address of (what was) the first element of the list;
	 */
	new->str = strdup(str);				/*1a*/
	for (len = 0; str[len] != '\0'; len++)		/*1b(1)*/
		;
	new->len = len;					/*1b(2)*/
	new->next = *head;				/*1c*/
	*head = new;
	return (*head);
}
