#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>

/**
* _putchar - writes the character c to stdout
*
* @c: the character to print
*
* Return:
* On success 1.
* On error, -1 is returned, and errno is set appropriately.
*
**/

int _putchar(char c);

/**
* _isupper - checks for uppercase character
*
* @c: character to be checked
*
* Return:
* 1 if c is uppercase
* 0 otherwise
*/

int _isupper(int c);

/**
* _isdigit - checks for digit character (i.e. 0 through 9)
* @c: character to be checked
*
* Return:
* 1 if c is a digit
* 0 otherwise
*/

int _isdigit(int c);

/**
* mul - multiplies two integers
* @a: first number to be added
* @b: second number to be added
* Return: product of the two parameters
*/

int mul(int a, int b);

/**
* print_numbers - prints digits 0 through 9
* Return: none-- void function
**/

void print_numbers(void);

/**
* print_most_numbers - prints digits 0 through 9, except for 2 and 4
* Return: none-- void function
**/

void print_most_numbers(void);

/**
* more_numbers - prints numbers 0 through 14
* Return: none-- void function
**/

void more_numbers(void);

/**
* print_line - prints the '_' character n times to create a line
* @n: number of times to print the '_' character
* Return: none-- void function
**/

void print_line(int n);

/**
* print_diagonal - draws diagonal line using the '\' character n times
* @n: number of times to print the '\' character
* Return: none-- void function
**/

void print_diagonal(int n);

/**
* print_square - draws a "square" using the '#' character n times
* @size: number of times to print the '#' character
* Return: none-- void function
**/

void print_square(int size);

/**
* print_triangle - draws a right triangle of base length n '#' characters
* @n: base length of triangle, represented by '#' characters
* Return: none-- void function
**/

void print_triangle(int n);

#endif
