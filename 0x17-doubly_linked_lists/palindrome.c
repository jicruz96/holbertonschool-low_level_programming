#include "lists.h"

/**
 * main - finds largest palindrome that's a product of 3 digit numbers
 * Return: always 1
 **/
int main(void)
{
	int a, b, c;

	for (a = 100; a < 1000; a++)
		for (b = a; b < 1000; b++)
			if (is_palindrome(a * b))
				if (a * b > c)
					c = a * b;
	return (printf("%u\n", c));
}

/**
 * is_palindrome - returns 1 if n is palindrome | 0 otherwise
 * @n: number to check
 * Return: 1 if palindrome | 0 otherwise
 **/
int is_palindrome(unsigned int n)
{
	dlistint_t *h = NULL, *t = NULL, *tmp;

	if (n)
	{
		for (; n; n /= 10)
			add_dnodeint_end(&h, n % 10);
		for (t = h; t->next; t = t->next)
			;
		for (tmp = h; h->n == t->n && h != t;)
		{
			h = h->next;
			if (h != t)
				t = t->prev;
		}
		free_dlistint(tmp);
	}
	return (t == h);
}
