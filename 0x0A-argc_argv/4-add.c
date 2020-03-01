#include <stdio.h>
#include <stdlib.h>
/**
* main - adds numbers
*
* @argc: number of arguments, always 1
* @argv: pointer to file name as a string
*
* Return: 1 (Error) if program receives non-numeric symbols
*/

int main(int argc, char **argv)
{
	/**
	* add will store the sum of numbers;
	* check is used to return error if a non-numeric symbol is found;
	*/
	int add, check, i, j;
	char tmp;

	/*If argc = 1, then no arguments were given. print & return 0.*/
	if (argc == 1)
		printf("0\n");

	else
	{
		add = 0;

		for (i = 1; i < argc; i++)
		{
			/*Check if an argument contains a non-numeric symbol*/
			for (j = 0, check = 0; *(*(argv + i) + j); j++)
			{
				tmp = *(*(argv + i) + j);
				if (tmp < 48 || tmp > 57)
					check++;
			}

			if (check != 0)
			{
				printf("Error\n");
				return (1);
			}

			/*Otherwise, add the argument to the sum*/
			add += atoi(*(argv + i));
		}
		/* Print the sum */
		printf("%d\n", add);
	}
	return (0);
}
