#include "holberton.h"

/**
* string_toupper - Change lowercase letters of a string to uppercase.
*
* @s: string to be operated on
*
* Return: charpointer to string
*/

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 96 && s[i] < 123)
			s[i] = s[i] - 32;
	}
	return (s);
}
