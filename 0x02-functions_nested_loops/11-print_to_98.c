#include <stdio.h>
#include "holberton.h"

/**
* print_to_98 - prints all integers from 'n' to 98l
* @n: starting number
* Return: void
*/

void print_to_98(int n)
{
	if (n < 99)
	{
		while (n < 99)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			else
				printf("\n");
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			else
				printf("\n");
			n--;
		}
	}
}
