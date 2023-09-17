#include "main.h"

/**
 * print_last_digit - Print last digit of a number
 * @num: This stores the last digit of number you want to find
 *
 * Return: The last digit of the given number
 */
int print_last_digit(int num)
{
	_putchar((num / 10) + '0');
	return (num % 10);
}
