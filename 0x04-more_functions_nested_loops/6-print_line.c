#include "main.h"

/**
 * print_line - This function draws a straight line in the terminal
 * @n: Variable that determine how long the line will be
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar(10);
	else
	{
		int i; /* i count the the nos 0f line(_) to be drawn */

		for (i = 0; i <= n; i++)
			_putchar('_');
	}

	_putchar(10);
}
