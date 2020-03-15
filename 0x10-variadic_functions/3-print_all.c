#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_all - prints characters, integers, floats, and strings
*
* @format: string where each ith char represents the data type of the ith arg
*
* Return: void
*/
void print_all(const char * const format, ...)
{
	va_list arguments;
	int i = 0;
	int j;
	char *separator = "";
	printer_pick printers[] = {
		{'c', print_char},
		{'s', print_str},
		{'i', print_int},
		{'f', print_float},
	};
	void (*print)(va_list);

	va_start(arguments, format);

	while (format && format[i])
	{
		j = 0;

		while (j < 4)
		{
			if (printers[j].format_type == format[i])
			{
				print = printers[j].printer;
				printf("%s", separator);
				print(arguments);
				separator = ", ";
				break;
			}

			j++;
		}

		i++;
	}

	printf("\n");

	va_end(arguments);

}

/**
* print_char - prints characters
*
* @list: argument list from program that calls print_char
*
* Return: void
*/

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
* print_str - prints characters
*
* @list: argument list from program that calls print_char
*
* Return: void
*/
void print_str(va_list list)
{
	printf("%s", va_arg(list, char *));
}

/**
* print_int - prints characters
*
* @list: argument list from program that calls print_char
*
* Return: void
*/
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
* print_float - prints characters
*
* @list: argument list from program that calls print_char
*
* Return: void
*/
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
