#include "holberton.h"
/**
* is_palindrome - returns 1 if string is palindrome, 0 if not
* @s: string to be checked
* Return: 1 if palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
	int check;
	char *LastLetter;

	if (s[0] == '\0')
		return (1);
	if ((s[1] > 31 || s[1] < 127))
		LastLetter = findLastLetter(s + 1);
	else
		LastLetter = s;
	return (check = palindrome_check(s, LastLetter));
}
/**
 * findLastLetter - returns last letter in a string
 * @s: string
 * Return: last letter in s
 */
char *findLastLetter(char *s)
{
	if (s[1] <= 31 || s[1] >= 127)
		return (s);
	return (findLastLetter(s + 1));
}
/**
 * palindrome_check - checks if a string is a palindrome
 * @s: string
 * @LastLetter: last letter in s
 * Return: 1 if palindrome | 0 if not
 */
int palindrome_check(char *s, char *LastLetter)
{
	if (s[0] != LastLetter[0])
		return (0);
	if (s == LastLetter || s + 1 == LastLetter)
		return (1);
	return (palindrome_check(s + 1, LastLetter - 1));
}
