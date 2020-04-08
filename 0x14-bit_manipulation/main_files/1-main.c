#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int n = sizeof(unsigned long int);
    printf("n = %d\n", n);
    printf("TEST 1:\nExpected:\n0\nActual:\n");
    print_binary(0);
    printf("\nTEST 2:\nExpected:\n1\nActual:\n");
    print_binary(1);
    printf("\nTEST 3:\nExpected:\n1100010\nActual:\n");
    print_binary(98);
    printf("\nTEST 4:\nExpected:\n10000000001\nActual:\n");
    print_binary(1025);
    printf("\nTEST 5:\nExpected:\n10000000001\nActual:\n");
    print_binary((1 << 10) + 1);
    printf("\nTEST 6:\nExpected:\n1111111111111111111111111111111111111111111111111111111111111111\nActual:\n");
    print_binary(ULONG_MAX);
    printf("\n");
    return (0);
}
