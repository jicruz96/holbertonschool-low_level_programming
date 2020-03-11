#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include <string.h>

/**
* get_op_func - selects the function requested by the user (for calc program)
*
* @s: operator. the operator will tell us which function to pick
*
* Return: pointer to the function that corresponds to s.
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	printf("Welcome to the get_op function. Entering while loop...\n");
	while (i < 6)
	{
		printf("while loop entered! i = %d\n", i);
		if (!(strcmp(ops[i].op,s)))
		{
			printf("Match found at index %d!\n", i);
			return (ops[i].f);
		}
		else
		{
			printf("No match, incrementing i..\n");
			i++;
		}
	}
	printf("No matches found. Returning NULL\n");
	return (NULL);
}
