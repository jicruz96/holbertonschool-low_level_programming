#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - returns the sum of all its parameters
*
* @n: number of arguments
*
* Return: the sum of parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;		/* numbers = valist of arguments */
	unsigned int i;
	int sum = 0;			/* sum will store the sum */


	va_start(numbers, n);		/* initialize numbers list */

	for (i = 0; i < n; i++)		/* sum numbers */
		sum += va_arg(numbers, int);

	va_end(numbers);		/* clean memory given to numbers list */

	return (sum);			/* Return sum. If n = 0, sum is 0 */
}
