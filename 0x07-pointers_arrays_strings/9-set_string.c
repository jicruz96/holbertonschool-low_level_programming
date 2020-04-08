#include "holberton.h"

/**
* set_string - sets the value of a pointer to a char
*
* @s: pointer that will be assigned to char
* @to: pointer that points to char that s will be pointing to
*
* Return: void
*/

void set_string(char **s, char *to)
{
	char **set;

	set = &to;
	*s = *set;
}
