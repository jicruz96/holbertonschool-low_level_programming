#include "holberton.h"

/**
* _islower - checks for lowercase character
* @c: character to be checked
* Return: 1 if c is lowercase | 0 otherwise
**/
int _islower(int c)
{
	return (c > 96 && c < 123);
}
