#include "main.h"

/**
 * is_prime_number - This program check if a number is a prime number
 * @n: The number to be checked
 *
 * Return: If number is prime return (1) otherwise return (0)
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2 || n == 3 || n % 6 == 0)
		return (1);
	else
		return (is_prime_number(n / 6));
}

