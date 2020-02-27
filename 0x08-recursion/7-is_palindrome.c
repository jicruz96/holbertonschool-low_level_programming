#include "holberton.h"

/**
* is_palindrome - returns 1 if string is palindrome, 0 if not
*
* @s: string to be checked
*
* Return: 1 if palindrome, 0 otherwise
*/

int is_palindrome(char *s)
{
	if (s == '\0')
		return (0);
	else
	{
		if (*(s + 1) == *(s - 1))
			return (0 + is_palindrome(s + 1));
		else
			return (is_palindrome(s + 1) + (int)*s);
	}
}
