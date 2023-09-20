#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 * main - Generates a random valid password
 *
 * This program generates a random password based on the given character set
 * and length. It uses the srand and time functions to ensure randomness.
 *
 * Return: Always 0.
 */
int main(void)
{

	int i;
	const char charset[] = "abcdefghijklmnopqrstuvwxz0123456789";

	/* Seed the random number generator with the current time */
	srand(time(NULL));


	/* Generate and print a random password */
	printf("Random Password: ");
	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		int index = rand() % (sizeof(charset) - 1);

		putchar(charset[index]);
	}
	printf("\n");

	return (0);
}
