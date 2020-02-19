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
	int index_num;
	char *reverse;

	while (s[strlen])
		strlen++;
	strlen--;
	for (index_num = 0; strlen >= 0; strlen--, index_num++)
	{
		reverse[strlen] = s[index_num];
		/*printf("Value of reverse: %s\n", reverse);
		printf("Value of count: %d\n", count);
		printf("Value of index_num: %d\n", index_num);*/
	}
}
