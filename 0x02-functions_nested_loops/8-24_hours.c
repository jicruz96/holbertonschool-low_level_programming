#include "holberton.h"

/**
* jack_bauer - prints every minute of the day, from 00:00 to 23:59
*
* Return: no return value
*/

void jack_bauer(void)
{
	int Hour_Tens, Hour_Ones, Minute_Tens, Minute_Ones;

	Hour_Tens = '0';

	while (Hour_Tens <= '2')
	{
		Hour_Ones = '0';
		while (Hour_Ones <= '9')
		{
			if (Hour_Tens == '2' && Hour_Ones == '4')
			{
				break;
			}
			else
			{
				Minute_Tens = '0';
				while (Minute_Tens <= '5')
				{
					Minute_Ones = '0';
					while (Minute_Ones <= '9')
					{
						_putchar(Hour_Tens);
						_putchar(Hour_Ones);
						_putchar(58);
						_putchar(Minute_Tens);
						_putchar(Minute_Ones);
						_putchar(10);
						Minute_Ones++;
					}
					Minute_Tens++;
				}
			}
			Hour_Ones++;
		}
		Hour_Tens++;
	}
}
