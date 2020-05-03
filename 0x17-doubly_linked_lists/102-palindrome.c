#include "lists.h"
#define MAX 1000
/**
 * main - finds largest palindrome that's a product of two 3 digit numbers
 * Return: always 1
 **/
int main(void)
{
	int a, b, c = 0;

	for (a = MAX / 10 + 1; a < MAX; a++)
		for (b = a; b < MAX; b++)
			if (a * b > c && is_palindrome(a * b))
				c = a * b;
	return (printf("%d\n", c));
}

int is_palindrome(unsigned int n)
{
	dlistint_t *h = NULL, *t = NULL, *tmp = NULL;
	int result = 1, check;

	for (check = 0; n; n /= 10, check++)
		t = add_dnodeint_end(&h, n % 10);
	for (tmp = h, check /= 2; check && result; h = h->next, t = t->prev, check--)
		if (h->n != t->n)
			result = 0;
	free_dlistint(tmp);
	return (result);
}
