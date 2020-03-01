#include <stdio.h>

/**
* main - prints number of arguments inputted into itself
*
* @argc: number of arguments, always 1
* @argv: pointer to file name as a string
*
* Return: Always 0 (success)
*/

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
