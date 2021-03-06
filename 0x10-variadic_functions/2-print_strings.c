#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings - prints strings consecutively, separated by the separator arg
*
* @separator: string to be printed between stings
* @n: number of arguments to print
*
* Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *null_check;

	if (n != 0)
	{
		va_start(strings, n);
		for (i = 0; i < n; i++)
		{
			null_check = va_arg(strings, char *);
			if (null_check == NULL)
				printf("(nil)");
			else
				printf("%s", null_check);
			if (separator != NULL && i < (n - 1))
				printf("%s", separator);
		}
		va_end(strings);
	}
	printf("\n");
}
