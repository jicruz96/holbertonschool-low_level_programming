#include "holberton.h"

/**
* puts2 - prints every other character of a string,
*
* @str: string to be printed
*
* Return: void
*/

void puts2(char *str)
{
	int index_num, c;

	for (index_num = 0; str[index_num]; index_num+= 2)
	{
		c = str[index_num];
		_putchar(c);
	}
	_putchar(10);
}
