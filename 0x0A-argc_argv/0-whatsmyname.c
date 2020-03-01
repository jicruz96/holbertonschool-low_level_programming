#include <stdio.h>

/**
* main - prints name of file where program is saved
*
* @argc: number of arguments, always 1
* @argv: pointer to file name as a string
*
* Return: Always 0 (success)
*/

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
