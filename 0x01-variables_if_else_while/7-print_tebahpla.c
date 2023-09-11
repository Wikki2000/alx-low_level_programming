#include <stdio.h>

/**
 * main - Entry of the program
 *
 * This program prints alphabet in reverse order (z - a)
 *
 * Return: Alwways 0(success)
 */
int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}

	putchar(10);
	return (0);
}
