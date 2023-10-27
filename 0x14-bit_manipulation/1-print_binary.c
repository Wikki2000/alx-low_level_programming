#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int bitmask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	while (bitmask)
	{
		if (n & bitmask)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
		bitmask >>= 1;
	}

	if (!flag)
		_putchar('0');
}
