#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "zxyvu";
    char *t;

    if (_strpbrk(s, f) != NULL)
	t = _strpbrk(s, f);
    else
	t = "Null";
    printf("%s\n", t);
    return (0);
}
