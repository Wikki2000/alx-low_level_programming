#include "main.h"

/**
 * print_numbers - Print natural numbers from 0-9
 */

void print_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		_putchar(num + '0');
		num++;
	}
	_putchar(10);
}
