#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Print all the variable arguement integers
 * @separator: The string to be printed between numbers
 * @..: A variable numbers of number to be printed
 *
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, value;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
		printf("%d", value);

		/* Ensure that seperator not printed after number */
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
