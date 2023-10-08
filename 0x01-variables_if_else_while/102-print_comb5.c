#include <stdio.h>

/**
 * main - Entry of the program
 *
 * This program prints all possible combinations of two two-digit numbers.
 * This numbers should range from 0 to 99 and is seperayed by comma.
 * The combinations of numbers should be printed in ascending order.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned int num1 = 0;
	unsigned int num2;

	while (num1 <= 98)
	{
		num2 = num1 + 1;

		while (num2 <= 99)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(32);

			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');
			if (num1 != 98 || num2 != 99)
			{
				putchar(',');
				putchar(32);
			}

			num2++;
		}

		num1++;
	}

	putchar(10);


	return (0);
}
