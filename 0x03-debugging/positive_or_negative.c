#include <stdio.h>

/**
 * positive_or_negative - Check sign of any given number
 * @n: The number to be checked
 *
 * This function check for sign or unsign integer integer.
 *
 * Return: The number (n)
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
}
