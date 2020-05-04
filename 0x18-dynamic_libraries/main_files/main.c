#include "holberton.h"
#include <stdio.h>

int main()
{
    char string[50] = "Hello ";
    char *other = "World!\n";

    printf("%s", _strcat(string, other));
    return (0);
}