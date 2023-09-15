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
			_putchar(num + '0');
			num++;
		}

		_putchar(10);
		count++;
	}
}
