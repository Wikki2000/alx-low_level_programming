#include <stdio.h>
#define SIZE 1
#define COUNT 1

/**
 * _putchar - Writes a character to stdout
 * @c: The character to write.
 *
 * This function writes the character 'c' to the standard output (stdout).
 *
 * Return: On success, the character 'c' is returned.
 * On failure, EOF is returned.
 */
int _putchar(char c)
{
	return (fwrite(&c, SIZE, COUNT, stdout));
}

/**
 * print_alphabet - Prints the alphabet in lower case
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}

}

/**
 * print_alphabet_x10 - Print an array of alphabet (10 x 27)
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}

		_putchar('\n');
	}
}

/**
 * _islower - Checks if alphabet is lower case
 * @c: The parameter that stores the alphabet
 *
 * Return: Returns "1" if alphabet is lower case, else return "0".
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}

/**
 * _isalpha - Checks if alphabet is lower case
 * @c: The parameter that stores the alphabet
 *
 * Return: Returns "1" if alphabet is lower or upper case,
 * else return "0".
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);

	else
		return (0);
}
