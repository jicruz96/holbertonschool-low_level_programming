#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;
    printf("*************************************************************************\n");
    n = binary_to_uint("1");
    printf("TEST 1:\n\tExpected: 1\n\tActual: %u\n", n);
    n = binary_to_uint("101");
    printf("TEST 2:\n\tExpected: 5\n\tActual: %u\n", n);
    n = binary_to_uint("1e01");
    printf("TEST 3:\n\tExpected: 0\n\tActual: %u\n", n);
    n = binary_to_uint("1100010");
    printf("TEST 4:\n\tExpected: 98\n\tActual: %u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("TEST 5:\n\tExpected: 402\n\tActual: %u\n", n);
    n = binary_to_uint(NULL);
    printf("TEST 6:\n\tExpected: 0\n\tActual: %u\n", n);
    n = binary_to_uint("0");
    printf("TEST 7:\n\tExpected: 0\n\tActual: %u\n", n);
    return (0);
}
