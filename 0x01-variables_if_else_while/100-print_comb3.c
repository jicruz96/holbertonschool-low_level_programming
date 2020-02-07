#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;

	x = '0';
	while (x < '9')
	{
		y = x + 1;
		while (y > x && y <= '9')
		{
			putchar(x);
			putchar(y);
			if (x == '8' && y == '9')
				break;
			putchar(',');
			putchar(' ');
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
