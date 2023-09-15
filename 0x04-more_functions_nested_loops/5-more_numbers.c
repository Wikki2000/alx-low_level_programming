#include "main.h"

/**
 * print_numbers - Print natural numbers from 0-9
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
