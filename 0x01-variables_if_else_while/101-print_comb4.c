#include <stdio.h>

/**
 * main - Entry of the program
 *
 * This  prints all possible different combinations of three digits.
 * seperated by comma follow by space. The three digits must be different.
 * 012, 120, 102, 021, 201, 210 are considered the same combination of
 * the three digits 0, 1 and 2.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned int num1 = 0;
	unsigned int num2;
	unsigned int num3;

	while (num1 <= 7)
	{
		num2 = num1 + 1;

		while (num2 <= 8)
		{
			num3 = num2 + 1;
			while (num3 <= 9)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(num3 + '0');

				if (!(num1 == 7 && num2 == 8 && num3 == 9))
				{
					putchar(',');
					putchar(32);
				}

				num3++;
			}

			num2++;
		}

		num1++;
	}

	putchar(10);

	return (0);
}
