#ifndef LISTS_H
#define LISTS_H
/*****************************************************************************/
/* IMPORTED HEADERS */
#include <stdlib.h>
#include <stdio.h>

/* STRUCTS */
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linkedlist node structure for Holberton project
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/* FUNCTION PROTOTYPES */
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);

dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

void free_dlistint(dlistint_t *head);
int sum_dlistint(dlistint_t *head);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

/* HELPER FUNCTION PROTOTYPES */
int get_head(const dlistint_t **ptr);
int get_tail(const dlistint_t **ptr);
dlistint_t *make_node(int n);
const dlistint_t *traverse(const dlistint_t *ptr, int n);
int is_pal(unsigned int n);

#endif /*LISTS_H*/
