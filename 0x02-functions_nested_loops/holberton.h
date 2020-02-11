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

#endif
