#include <stdio.h>

/**
* main - prints number of arguments inputted into itself
*
* @argc: number of arguments, always 1
* @argv: pointer to file name as a string
*
* Return: Always 0 (success)
*/

int main(int argc __attribute__((unused)), char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
