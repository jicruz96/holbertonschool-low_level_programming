#include <stdlib.h>
#include "function_pointers.h"

/**
* print_name - prints a name, according to whatever printing function is called
*
* @name: name to print
* @f: function that determines printing behavior
*
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
