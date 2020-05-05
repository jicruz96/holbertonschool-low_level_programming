#include "holberton.h"
#include <limits.h>
#define IS_DIGIT ((s[i] >= '0') && (s[i] <= '9'))
#define STRING_EXISTS (s[i] != '\0')
#define DIGIT (s[i] - '0')
/**
 * _atoi - converts a string to an integer, based on the first found integer
 * @s: string to convert to integer
 * Return: found integer, as integer data type | 0 if no integer found
 */
int _atoi(char *s)
{
	int i, num, digit, sign = 1;

	/* loop through string indexes until the end */
	for (i = 0; STRING_EXISTS; i++)
	{
		if (IS_DIGIT)
		{
			/* while the char is a digit, update 'num' */
			for (num = 0; IS_DIGIT; i++)
			{
				digit = sign * DIGIT;
				num *= 10;
				num += digit;
			}
			/* then, return it */
			return (num);
		}

		/* if char is a hypen, flip sign's sign */
		if (s[i] == '-')
			sign *= -1;
	}
	/* return 0 if string doesn't exist or a number wasn't found */
	return (0);
}
