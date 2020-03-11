#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
* main - performs simple operations on two numbers, prints result
*
* @argc: number of arguments. Should ALWAYS be 4. Else, return ERROR.
* @argv: array of arguments.
*
* Return: 0 if successful |	Returns the following exit statuses if failed:
*				 98: argc != 4
*				 99: desired operation doesn't exist
*				100: division by zero detected, ABORT!
*
*/

int main(int argc, char *argv[])
{
	int a, b;
	int (*operation)(int, int) = get_op_func(argv[2]);

	printf("Welcome to your main function!\n");
	printf("Checking for errors...\n");

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("No errors found!\n");

	a = atoi(*(argv + 1));
	b = atoi(*(argv + 3));

	printf("argc = %d, a = %d, b = %d, op = %s\n", argc, a, b, argv[2]);
	printf("Checking for division by 0...\n");
	if (b == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("...we're good! Let's print the calculation:\n");
	printf("%d\n", operation(a, b));

	return (0);

}
