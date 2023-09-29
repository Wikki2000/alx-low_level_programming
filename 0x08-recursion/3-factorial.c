#include "main.h"

/**
 * factorial - Find factorial of a given integer
 * @n: Number were it factorial is to be calculated
 *
 * Return: Factorisl of a given number
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
