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
 **/

char *argstostr(int ac, char **av)
{
	char *array;
	int z = 0;
	int i, len;
	int size = 1;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (len = 0; av[i][len]; len++)
			size++;

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (len = 0; av[i][len]; len++)
		{
			array[z] = av[i][len];
			z++;
		}
		array[z] = '\n';
		z++;
	}
	array[z] = '\0';
	if (array == NULL)
		return (NULL);
	return (array);
}
