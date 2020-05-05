#include "holberton.h"

/**
* _isalpha - checks for letter character
* @c: character to be checked
* Return: 1 if c is a letter | 0 otherwise
*/
int _isalpha(int c)
{
	return ((c > 64 && c < 91) || (c > 96 && c < 123));
}
