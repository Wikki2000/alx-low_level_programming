#include "main.h"

/**
 * main - Entry point of the program
 *
 * This function prints the message "Hello" followed by a newline character.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char message[] = "Hello\n";

	for (i = 0; message[i] != '\0'; i++)
	{
		_putchar(message[i]);
	}

	putchar(10);
	return (0);
}

