#include "holberton.h"

/**
* leet - Translate a string to leetspeak (aka 1337)
*
* @s: string to be operated on
*
* Return: charpointer to string
*/

char *leet(char *s)
{
	int i, test;
	char letters[] = {111, 108, 101, 97, 116};
	char numbers[] = {48, 49, 51, 52, 55};

	for (i = 0; s[i]; i++)
	{
		for (test = 0; test < 5; test++)
		{
			if (s[i] == letters[test] || s[i] == letters[test] - 32)
				s[i] = numbers[test];
		}
	}
	return (s);
}
