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
	int strlen = 0;
	int index_num = 0;
	char front, back;

	while (s[strlen])
		strlen++;
	while ( index_num < --strlen)
	{
		front = s[index_num];
		back = s[strlen];
		s[index_num++] = back;
		s[strlen] = front;
	}
}
