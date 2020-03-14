#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
* sum_them_all - returns the sum of all its parameters
*
* @n: number of numbers to add
*
* Return: the sum of parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;		/* numbers = valist of arguments */
	unsigned int i;
	int sum = 0;			/* sum will store the sum */


	va_start(numbers, n);	/* initialize numbers list */

	/**
	* For the sum execution, we must check if
	* there is another argument ahead of us, just
	* in case the given n was larger than the actual
	* number of arguments. Thus, our condition in our
	* for loop includes a check for that
	*/

	for (i = 0; i < n /*&& va_arg(numbers, int)*/; i++)
	{
		sum += va_arg(numbers, int);
	}

	va_end(numbers);		/* clean memory given to numbers list */

	return (sum);			/* Return sum. If n = 0, sum is 0 */
}
