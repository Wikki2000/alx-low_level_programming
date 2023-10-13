#include <stdarg.h>

/**
 * sum_them_all - Calculate the sum of all parameter entered
 * @n: The number of parameter entered
 * @..: The variable numbers to be added
 *
 * Return: Sum of all parameter entered by user
 *      eslse return (0) if n = 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}
