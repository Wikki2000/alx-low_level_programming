#include "main.h"

/**
 * print_most_numbers - Print natural numbers from 0-9 excluding 2 amd 4
 */

void print_most_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		if (num != 2 && num != 4)
			_putchar(num + '0');
		num++;
	}
	_putchar(10);
}
