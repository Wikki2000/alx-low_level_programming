#include <stdio.h>

/**
 * main - Entry of the program
 *
 * This program prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int i;

	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}

	putchar(10);

	return (0);
}
