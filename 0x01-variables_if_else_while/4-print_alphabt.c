#include <stdio.h>

/**
 * main - Entry of the program
 *
 * This program print all letters of alphabet
 * except from q and e.
 *
 * Return: 0 on success and non zero on failure
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
		alpha++;
	}

	putchar(10);

	return (0);
}
