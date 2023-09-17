#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Print numbers 0-14 repeatedly
 */
void more_numbers(void)
{
	int count = 1;

	while (count < 11)
	{
		int num = 0;

		while (num < 15)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
			num++;
		}

		_putchar('\n');
		count++;
	}
}
