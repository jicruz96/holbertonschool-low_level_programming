#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
const listint_t *find_loop(const listint_t *head);
/**
 * print_listint_safe - prints all the nodes of a list; avoids infinite loops
 * @head: head pointer to list to be printed
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int loop_match = 2, nodes_printed = 0;
	const listint_t *loop_start;

	loop_start = find_loop(head);

	while (loop_match && head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		nodes_printed++;
		head = head->next;
		if (head == loop_start)
			loop_match--;
		if (!(loop_match))
			printf("->[%p] %d\n", (void *)head, head->n);
	}
	return (nodes_printed);
}
/**
 * find_loop - finds a loop in a linked list
 * @head: head pointer to list to be printed
 * Return: address of the node where the loop starts or NULL if no loop found
 */
const listint_t *find_loop(const listint_t *head)
{
	const listint_t *hare, *tortoise;

	hare = head;
	while (hare)
	{
		tortoise = head;
		hare = hare->next;
		if (hare == NULL || hare == tortoise)
			return (hare);
		for (; tortoise != hare; tortoise = tortoise->next)
			if (tortoise->next == hare->next)
				return (tortoise->next);
	}
	return (hare);
}
