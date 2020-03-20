#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - adds a new node at the end of a linked list
 *
 * @head: pointer to (head of) linked list
 * @str: new node to add to end of linked list
 *
 * Return: address of new element, or NULL if malloc fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	/**
	 * CODE BLOCK #0 - VARIABLES
	 * "new" is a pointer to the new node we're adding to the list.
	 * "len" captures the string length of str.
	 * "temp" stores
	 */
	list_t *new = malloc(sizeof(list_t));
	unsigned int len;
	list_t *tmp = malloc(sizeof(list_t));

	printf("=============welcome to add_node_end===============\n");
	if (new == NULL)
		return (NULL);
	/**
	 * CODE BLOCK #1 - MAKE A NEW NODE
	 * Populate the "new" struct with:
	 *	a. str in its str data type;
	 *	b. the length of str in the len data type by;
	 *		b1. incrementing len for every char before the null byte;
	 *		b2. making new->len equal to len.
	 *	c. a NULL pointer in the "next element" data type
	 */
	new->str = strdup(str);				/*1a*/
	for (len = 0; str[len] != '\0'; len++)		/*1b(1)*/
		;
	new->len = len;					/*1b(2)*/
	new->next = NULL;				/*1c*/
	/**
	 * CODE BLOCK #2 - MAKE NODE LAST NODE OF LIST
	 */
	printf("let's deal with tmp->next!...\n");
	if (*head == NULL)
	{
		printf("*head = NULL...\n");
		*head = new;
		return (*head);
	}
	else
	{
		printf("*head != NULL! Bring in the temp!\n");
		tmp = *head;
		printf("tmp: \"I'm in!\"\n");
		while (tmp->next != NULL)
		{
			printf("searching for end of list...\n");
			tmp->next = (tmp->next)->next;
		}
		printf("end of list found. link to new...\n");
		tmp->next = new;
		printf("new linked to end of list!\n");
		return(tmp);
	}

}
