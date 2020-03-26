#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("TEST 1:\nExpected: 0\nActual:\n");
    print_binary(0);
    printf("\nTEST 2:\nExpected: 1\nActual:\n");
    print_binary(1);
    printf("\nTEST 3:\nExpected: 1100010\nActual:\n");
    print_binary(98);
    printf("\nTEST 4:\nExpected: 10000000000\nActual:\n");
    print_binary(1024);
    printf("\nTEST 5:\nExpected: 10000000001\nActual:\n");
    print_binary((1 << 10) + 1);
    return (0);
}
