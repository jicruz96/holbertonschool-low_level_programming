#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_alphabet - Loop statement that uses the _putchar function to print out
 * the alphabet, lower case.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c = 97;

	while (c <= 122)
	{
		_putchar(c);
		c++;
	}
	_putchar (10);
	return;
}

#endif
