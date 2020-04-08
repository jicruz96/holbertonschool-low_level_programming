#include "holberton.h"

/**
* rot13 - Encode a string using the ROT13 cypher
*
* @s: string to be operated on
*
* Return: charpointer to string
*/

char *rot13(char *s)
{
	int i, test;
	char a[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char b[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (i = 0; s[i]; i++)
	{
		for (test = 0; test < 52; test++)
		{
			if (s[i] == a[test])
			{
				s[i] = b[test];
				break;
			}
		}
	}
	return (s);
}
