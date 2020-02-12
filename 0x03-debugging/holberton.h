#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>

/**
* positive_or_negative - prints sign of tested number
* @n: number to be tested
* Return: void
**/

void positive_or_negative(int n);

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c);

/**
* print_remaining_days - prints remaining days in year from starting point
* @month: month of the year (1-12)
* @day: day of the month (1-31)
* @year: a year (any value)
*/

void print_remaining_days(int month, int day, int year);

/**
* convert_day - turns day of month into day of year
* @month: month of the year (1-12)
* @day: day of the month (1-31)
* Return: day of the year
*/

int convert_day(int month, int day);

#endif
