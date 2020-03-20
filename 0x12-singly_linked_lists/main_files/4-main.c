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
    list_t *head;

    head = NULL;
    add_node_end(&head, "a");
    add_node_end(&head, "a");
    add_node_end(&head, "a");
    add_node_end(&head, "a");
    add_node_end(&head, "a");
    print_list(head);
    free_list(head);
    head = NULL;
    return (0);
}
