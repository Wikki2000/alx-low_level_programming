#include <stdio.h>

/**
 * main - Entry of the program
 *
 * This program prints all single-digit numbers of base 10
 * starting from 0, followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}

	putchar('\n');

	return (0);
}
