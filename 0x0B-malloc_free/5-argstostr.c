#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* argstostr - concatenates all the program's arguments into a string
*
* @ac: argument count
* @av: argument vector
*
* Return: char pointer to string, or NULL if malloc fails, or if ac or av = 0
*/

char *argstostr(int ac, char **av)
{
	char *array;
	int i, j, count;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			count++;

	array = malloc(count + 1);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		array = str_concat(array, av[i]);
		array = str_concat(array, "\n");
	}

	return (array);
}

/**
* str_concat - concatenates two strings
*
* @s1: first string
* @s2: second string
*
* Return: pointer to concatenated string, or NULL if memory allocation fails
*/
char *str_concat(char *s1, char *s2)
{
	int len_s1;
	int len_s2;
	int i;
	char *ptr;

	for (len_s1 = 0; s1[len_s1]; len_s1++)
		;
	for (len_s2 = 0; s2[len_s2]; len_s2++)
		;
	if (len_s2 == 0 && len_s1 == 0)
		ptr = malloc(0);
	else
		ptr = malloc(len_s1 + len_s2 + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
		ptr[i] = s1[i];
	for (i = 0; i <= len_s2; i++)
		ptr[len_s1 + i] = s2[i];
	return (ptr);
}
