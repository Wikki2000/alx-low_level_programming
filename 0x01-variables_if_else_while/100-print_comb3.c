#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints all possible different combinations of two digits
 * with the smallest combination considered (e.g., 01 instead of 10).
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned int number1 = 0;
	unsigned int number2;

	while (number1 <= 8)
	{
		number2 = number1 + 1;

		while (number2 <= 9)
		{
			putchar(number1 + '0');
			putchar(number2 + '0');

			if (!(number1 == 8 && number2 == 9))
			{
				putchar(',');
				putchar(32);
			}

			number2++;
		}

		number1++;
	}

	putchar(10);

	return (0);
}
