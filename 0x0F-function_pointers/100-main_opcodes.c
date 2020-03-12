#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "function_pointers.h"

/**
* main - prints its own opcodes
*
* @argc: number of arguments. Should ALWAYS be 2. Else, return ERROR.
* @argv: array of arguments.
*
* Return: 0 if successful
*/

int main(int argc, char *argv[])
{
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}


	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
}
