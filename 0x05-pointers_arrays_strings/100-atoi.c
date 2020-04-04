#include "holberton.h"
#define DIVISOR 100000000
/**
 * _atoi - converts a string to an integer, based on the first found integer
 * @s: string to convert to integer
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0, sign = 0, sum = 0, base = 10, check = 0;

	for (; s[i] != '\0' && !(check); i++)
		if (s[i] == '-')
			sign = sign ^ 1;
		else
			for (; s[i] >= '0' && s[i] <= '9' && s[i] != '\0'; i++, check++)
				if (!(sum * base / DIVISOR && s[i] > '8'))
					sum = (sum * base) + (s[i] - '0');
				else
					return (INT_MIN);

	if (sign && sum != INT_MIN)
		return (-sum);
	else
		return (sum);

}
