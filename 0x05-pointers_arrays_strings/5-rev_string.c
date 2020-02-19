#include "holberton.h"

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
	int index_num;
	int store;

	while (s[strlen])
		strlen++;
	strlen--;
	for (index_num = 0; strlen >= 0; strlen--, index_num++)
	{
		store = s[index_num];
		s[strlen] = s[index_num];
		s[index_num] = store
	}
}
