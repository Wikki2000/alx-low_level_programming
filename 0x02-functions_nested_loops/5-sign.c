#include "main.h"

/**
 * print_sign - Print the that prints the sign of a number
 * @n: Stores the number
 *
 * Return: Return (0) if n > 0.
 * Return (1) if n = 0.
 * Return (-1) if n < 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(' ');
		return (1);
		_putchar(10);
	}

	else if (n == 0)
	{
		_putchar('0');
		_putchar(' ');
		_putchar(10);
		return (0);
	}

	else if (n < 0)
	{
		_putchar('-');
		_putchar(' ');
		_putchar(10);
		return (-1);
	}

	return (0);
}
