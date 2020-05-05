#include "lists.h"
#define MAX 1000
#define MIN ((MAX / 10) + 1)

/**
 * main - finds largest palindrome that is product of two #s lower than MAX
 * Return: print statement with result
 **/
int main(void)
{
	int a, b, c = 0;

	for (a = MIN; a < MAX; a++)
		for (b = a; b < MAX; b++)
			if (a * b > c && is_pal(a * b))
				c = a * b;
	return (printf("%d\n", c));
}
/**
 * is_pal - checks if a number is a palindrome
 * @n: number to check
 * Return: 1 if palindrome | 0 if not
 **/
int is_pal(unsigned int n)
{
	dlistint_t *h = NULL, *t = NULL, *tmp = NULL;
	int result = 1;

	for (; n; n /= 10)
		t = add_dnodeint_end(&h, n % 10);
	for (tmp = h; result; h = h->next, t = t->prev)
		if (h->n != t->n)
			result = 0;
	free_dlistint(tmp);
	return (result);
}
