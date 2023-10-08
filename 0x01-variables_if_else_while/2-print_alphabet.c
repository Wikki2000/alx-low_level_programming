#include <stdio.h>

/**
 * main -  program to generate alphabet in lower case
 *
 * Return: Always (0)
 */
int main(void)
{
/* A program to generate alphabet in lower case */
	int letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar(10);

	return (0);
}
