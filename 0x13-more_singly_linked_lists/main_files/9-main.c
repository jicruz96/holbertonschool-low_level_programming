#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 5);
    add_nodeint_end(&head, 6);
    add_nodeint_end(&head, 7);
    print_listint(head);
    printf("--------REGULAR---------\n");
    insert_nodeint_at_index(&head, 5, 999);
    print_listint(head);
    printf("--------AT ZERO---------\n");
    insert_nodeint_at_index(&head, 0, 998);
    print_listint(head);
    printf("--------AT ZERO(2)---------\n");
    insert_nodeint_at_index(&head, 0, 997);
    print_listint(head);
    printf("--------AT END---------\n");
    insert_nodeint_at_index(&head, 11, 11);
    print_listint(head);
    printf("--------AT END (2)---------\n");
    insert_nodeint_at_index(&head, 12, 12);
    print_listint(head);
    printf("--------NON EXISTENT---------\n");
    insert_nodeint_at_index(&head, 55, 4096);
    print_listint(head);
    free_listint2(&head);
    return (0);
}
