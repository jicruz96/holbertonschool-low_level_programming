#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
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

	printf("0. Welcome to sum_them_all\n");

	/*if (n != 0)			check if n = 0. if so, ignore code
	{*/
		printf("1. n is not zero! Let's initialize numbers list\n");

		va_start(numbers, n);	/* initialize numbers list */

		printf("2. numbers initialized\n");

		/**
		* For the sum execution, we must check if
		* there is another argument ahead of us, just
		* in case the given n was larger than the actual
		* number of arguments. Thus, our condition in our
		* for loop includes a check for that
		*/

		for (i = 0; i < n /*&& va_arg(numbers, int)*/; i++)
		{
			printf("3(%d). In the summing loop\n", i);

			sum += va_arg(numbers, int);

			printf("3(%d)B. summed! sum = %d\n", i, sum);
		}

		printf("3C. Out of summing loop\n");

		va_end(numbers);	/* clean memory given to numbers list */

		printf("4. numbers list has been deallocated\n");
	/*}*/

	printf("Function complete! Time to return sum:\n");

	return (sum);			/* Return sum. If n = 0, sum is 0 */
}
