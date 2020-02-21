#include <stdio.h>

int main(void)
{
	int n, l;
	int a[5];
	int *p;

	p = &n;
	a[2] = 1024;

	/*
	* write your line of code here...
	* Remember:
	* - you are not allowed to use a
	* - you are not allowed to modify p
	* - only one statement
	* - you are not allowed to code anything else than this line of code
	*/
	*(p + 6) = 98;
	printf("n = %p\n", &n);
	printf("l = %p\n", &l);
	printf("p = %p\n", &p);
	for (l = 0; l < 5; l++)
	{
		/* ...so that this prints 98\n */
		printf("a[%d] = %d and is in %p\n", l, a[l], &a[l]);
	}
	return (0);
}
