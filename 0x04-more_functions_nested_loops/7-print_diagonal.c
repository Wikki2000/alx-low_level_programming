#include "main.h"

/**
 * print_diagonal - Print diagonal using thye charactrer (\)
 * @n: Determin the lenght of diagonal to be print
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');

	else
	{
		/* i count the diagonal character */
		int i;

		for (i = 1; i <= n; i++)
		{
			int j; /* count the space character */

			for (j = 1; j <= i; j++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}

	_putchar('\n');
}
