#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *p;

    p = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("Here is s1: %s\n", s1);
    printf("Here is p: %s\n", p);
    return (0);
}
