#include <stdio.h>

/**
* fizz_buzz - Plays the children's game Fizz-Buzz until number n
* Return: none-- void function
*/

void fizz_buzz(void)
{
	int n = 100;
	int Fizz = 3;
	int Buzz = 5;
	int FizzBuzz = Fizz * Buzz;
	int output;

	for (output = 1; output <= n; output++)
	{
		if (output % FizzBuzz == 0)
		{
			printf("FizzBuzz");
		}
		else if (output % Fizz == 0)
		{
			printf("Fizz");
		}
		else if (output % Buzz == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", output);
		}
		if (output != n)
			putchar(' ');
	}
	printf("\n");
}

/**
* main - Entry point
* Return: always 0
**/

int main(void)
{
	fizz_buzz();
	return (0);
}
