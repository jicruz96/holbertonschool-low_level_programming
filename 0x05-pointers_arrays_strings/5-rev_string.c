#include "holberton.h"
#include <stdio.h>

/**
* rev_string - reverses a string
*
* @s: string to be reversed
*
* Return: void
*/

void rev_string(char *s)
{
	int len = _strlen(s) - 1;
	int index_num;
	char *reverse;

	for (index_num = 0; len >= 0; len--, index_num++)
	{
		reverse[len] = s[index_num];
		/*printf("Value of reverse: %s\n", reverse);
		printf("Value of count: %d\n", count);
		printf("Value of index_num: %d\n", index_num);*/
	}
	printf("Value of *reverse: %c\n", *reverse);
	printf("Value of reverse: %s\n", reverse);
}

/**
* _strlen - returns the length of a string
*
* @s: string to be evaluated
*
* Return: integer representing length of string
*/

int _strlen(char *s)
{
	int strlen;

	while (s[strlen])
		strlen++;
	return (strlen);
}
