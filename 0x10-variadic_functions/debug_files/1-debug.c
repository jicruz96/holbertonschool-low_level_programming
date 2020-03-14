#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - prints numbers consecutively, separated by separator arg
*
* @separator: string to be printed between numbers
* @n: number of arguments to print
*
* Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	printf("0. ***Welcome to print_numbers***\n");

	printf("1. Initializing numbers list...\n");

	va_start (numbers, n);			/* initialize numbers list */

	printf("1B. Numbers list initialized...\n");

	printf("2. About to check if separator is NULL\n");

	if (separator != NULL)
	{
		printf("3. Separator is not NULL, entering print loop\n");

		for (i = 0; i < n; i++)			/* print arguments */
		{
			printf("%d", va_arg(numbers, int));

			if (i != n - 1)
			{
				printf("%s", separator);
			}
		}

		printf("\n3(%d). Printing loop exited\n", i);
	}

	printf("4. Done printing arguments. Printing newline...\n");

	printf("\n");

	printf("5. deallocating numbers list...\n");

	va_end(numbers);

	printf("5B. numbers list deallocated\n");

	printf("***print_numbers function completed!***\n\n\n");
}
