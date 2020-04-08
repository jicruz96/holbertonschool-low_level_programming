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
    list_t *new;
    list_t hello = {"world", 5, NULL};
    size_t n;

    head = &hello;
    new = NULL;
    head = new;
    n = list_len(head);
    printf("Do you seg fault before this? NO!\n");
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}
