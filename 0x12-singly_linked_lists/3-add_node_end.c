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
	list_t *new = malloc(sizeof(list_t));
	unsigned int len;
	list_t *tmp1 = malloc(sizeof(list_t));
	list_t *tmp2 = malloc(sizeof(list_t));

	if (new == NULL || tmp1 == NULL)
		return (NULL);

	new->str = strdup(str);				/*1a*/
	for (len = 0; str[len] != '\0'; len++)		/*1b(1)*/
		;
	new->len = len;					/*1b(2)*/
	new->next = NULL;				/*1c*/

	if (*head == NULL || (*head)->next == NULL)
	{
		if (*head == NULL)
			*head = new;
		else
			(*head)->next = new;
		return (*head);
	}
	else
	{
		tmp1 = *head;
		tmp2 = *head;
		for (tmp1 = *head; tmp1->next != NULL; tmp1 = tmp2)
			tmp2 = tmp1->next;
		tmp1->next = new;
		return (new);
	}

}
