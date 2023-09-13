#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 * followed by a newline.
 */
void print_alphabet_x10(void)
{
	unsigned int i;

	for (i = 1; i <= 10; i++)
	{
		char alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar(10);
	}
}
