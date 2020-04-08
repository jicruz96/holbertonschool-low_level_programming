#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int w = 0;
	int x;
	int y;
	int z;

	while (w <= 9)
	{
		x = 0;
		while (x <= 9)
		{
			y = w;
			while (y <= 9)
			{
				if (y == w)
					z = x + 1;
				else
					z = 0;
				while (z <= 9)
				{
					putchar(w + '0');
					putchar(x + '0');
					putchar(' ');
					putchar(y + '0');
					putchar(z + '0');
					if (w == 9 && x == 8)
						break;
					putchar(',');
					putchar(' ');
					z++;
				}
				y++;
			}
			x++;
		}
		w++;
	}
	putchar('\n');
	return (0);
}
