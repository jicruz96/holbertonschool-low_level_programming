#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *p;

    printf("s1 b4 cat: %s\n", s1);
    printf("s2 b4 cat: %s\n", s2);
    p = _strcat(s1, s2);
    printf("s1 after cat: %s\n", s1);
    printf("s2 after cat: %s\n", s2);
    printf("p: %s\n", p);
    return (0);
}
