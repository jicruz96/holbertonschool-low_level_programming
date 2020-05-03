#include "lists.h"

int is_palindrome(unsigned int n);
dlistint_t *num2dlistint(unsigned int n);

int main(void)
{
    int a = 100, b = 100;
    int largest_palindrome = 0, max_a = 0, max_b = 0;

    for (a = 100; a < 1000; a++)
        for (b = a; b < 1000; b++)
            if (is_palindrome(a * b))
                if (a * b > largest_palindrome)
                    max_a = a, max_b = b, largest_palindrome = a * b;

    return (printf("%u * %u = %u\n", max_a, max_b, largest_palindrome));
}

int is_palindrome(unsigned int n)
{
    dlistint_t *h = NULL, *t;
    int return_val = 1;

    /*     printf("%u\n", n);
 */
    if (!n)
        return (return_val);

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
        return_val--;

    free_dlistint(h);
    return (return_val);
}