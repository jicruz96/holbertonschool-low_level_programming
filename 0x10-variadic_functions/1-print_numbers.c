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

	va_start (numbers, n);		/* initialize numbers list */

	if (separator != NULL)		/* if separator is null, skip print code */
	{
		for (i = 0; i < n; i++)	/* print arguments */
		{
			printf("%d", va_arg(numbers, int));

			if (i != n - 1)
			{
				printf("%s", separator);
			}
		}

	}
	printf("\n");			/* print newline AFTER end of print code */

	va_end(numbers);		/* deallocate memory for numbers list */
}
