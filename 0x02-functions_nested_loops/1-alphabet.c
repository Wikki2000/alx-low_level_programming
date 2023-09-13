#include "main.h"

/**
 * void print_alphabet(void) - Print alphabet in lower case
 */

void print_alphabet(void)
{
	char alpha = 'a';

	for (; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}

	_putchar(10);
}
