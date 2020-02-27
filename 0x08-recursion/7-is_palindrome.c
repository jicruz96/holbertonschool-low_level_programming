#include "holberton.h"
#include <stdio.h>
/**
* is_palindrome - returns 1 if string is palindrome, 0 if not
*
* @s: string to be checked
*
* Return: 1 if palindrome, 0 otherwise
*/

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		if (*(s + 1) == *(s - 1))
		{
			return (-(is_palindrome(s + 1)));
		}
		else if (*s == *(s + 1))
		{
			return (*s - is_palindrome(s + 1));
		}
		/*
		* else if (is_palindrome(s + 1) == is_palindrome(s + 2))
		* {
		*	 return (-(is_palindrome(s + 1)) + *s);
		* }
		*/
		else
		{
			if (is_palindrome(s + 1) + *s == 0)
			{
				return (1);
			}
			else
			{
				if (*(s - 1) == '\0')
					return (0);
				else
					return (is_palindrome(s + 1) + *s);
			}
		}
	}
}
