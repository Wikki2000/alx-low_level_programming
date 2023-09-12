#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints all possible combination of single number
 * separated by comma followed by space.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		if (i <= 8)
		{
			putchar(',');
			putchar(32);
		}

		i++;
	}

	putchar(10);

	return (0);
}
