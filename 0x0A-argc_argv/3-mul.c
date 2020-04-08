#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies two numbers
*
* @argc: number of arguments, always 1
* @argv: pointer to file name as a string
*
* Return: 1 (Error) if program does not receive two arguments
*/

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
