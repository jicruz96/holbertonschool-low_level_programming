#include "lists.h"

int is_palindrome(unsigned int n);
dlistint_t *num2dlistint(unsigned int n);

/**
 * main - finds largest palindrome that's a product of 3 digit numbers
 * Return: always 1
 **/
int main(void)
{
	int a = 100, b = 100;
	int largest_palindrome = 0;

	for (a = 100; a < 1000; a++)
		for (b = a; b < 1000; b++)
			if (is_palindrome(a * b))
				if (a * b > largest_palindrome)
					largest_palindrome = a * b;

	printf("LARGEST PALINDROME: %u\n", largest_palindrome);
	return (1);
}

/**
 * is_palindrome - returns 1 if n is palindrome | 0 otherwise
 * @n: number to check
 * Return: 1 if palindrome | 0 otherwise
 **/
int is_palindrome(unsigned int n)
{
	dlistint_t *h = NULL, *t;
	int result = 1;

	if (!n)
		return (result);

	for (; n; n /= 10)
		add_dnodeint_end(&h, n % 10);

	for (t = h; t->next;)
		t = t->next;

	while (t->n == h->n && h != t)
	{
		t = t->prev;
		if (t == h)
			break;
		h = h->next;
	}

	if (t != h)
		result--;

	free_dlistint(h);

	return (result);
}
