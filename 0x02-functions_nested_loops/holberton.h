#ifndef HOLBERTON_H
#define HOLBERTON_H

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
* print_alphabet - prints lower case alphabet to stdout
**/

void print_alphabet(void);

/**
* print_alphabet_x10 - prints lower case alphabet to stdout, ten times.
**/

void print_alphabet_x10(void);

/**
* _islower - checks for lowercase character
*
* @c: character to be checked
*
* Return:
* 1 if c is lowercase
* 0 otherwise
*/

int _islower(int c);

/**
* _isalpha - checks for alphabetic character
*
* @c: character to be checked
*
* Return:
* 1 if c is a letter of any case;
* 0 otherwise
*/

int _isalpha(int c);

/**
* print_sign - prints the sign of a number n.
*
* @n: number to be checked for sign.
*
* Return:
*  1 and prints + if n > 0
* -1 and prints - if n < 3
*  0 and prints 0 if n = 0
*
*/

int print_sign(int n);

/**
* _abs - computes and returns the absolute value of an integer.
* @int: number to be computed
* Return: absolute value of argument.
*
*/

int _abs(int);

/**
* print_last_digit - prints the last digit of a number
* @int: number to be evaluated
* Return: value of last digit
*/

int print_last_digit(int);

/**
* jack_bauer - prints every minute of the day, from 00:00 to 23:59
*
* Return: no return value
*/

void jack_bauer(void);

/**
* times_table - prints multiplication table for the number 9
*
* Return: no return value
*/

void times_table(void);

/**
* add - adds the two parameters and returns the result.
* @int: number to be added
* Return: sum of the two parameters
*/

int add(int, int);

#endif
