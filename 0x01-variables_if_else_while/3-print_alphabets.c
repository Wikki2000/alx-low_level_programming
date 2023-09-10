#include <stdio.h>

/**
 * main - Entry of point of the program
 *
 * This program prints alpabet in lowercase
 * and followed by uppercase.
 *
 * Return: 0 on sucess and non zero on failure
 */
int main(void)
{
	int letter;

	/* While loop to print lower case later */

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	/* While loop to print upper case later */

	letter = 'A';
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}

	putchar(10);

	return (0);
}
