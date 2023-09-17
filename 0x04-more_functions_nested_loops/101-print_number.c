#include <stdio.h>
#include "main.h"

/**
 * print_number(int n) - Prints an integer
 * @n: The integer to be printed
 *
 * This function print any number enter by user
 *
 * Return: Always 0 (success)
 */
void print_number(int n)
{
	if (n == 0)
		_putchar('0');

	else
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}

		if (n / 10 != 0)
			print_number(n / 10);

		putchar((n % 10) + '0');
	}
}
