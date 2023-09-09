#include <stdio.h>

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
