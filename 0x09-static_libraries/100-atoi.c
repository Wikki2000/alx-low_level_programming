#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The converted integer value.
 */
int _atoi(char *s) {
	int sign = 1; /* Initialize sign to positive */
	int result = 0; /* Initialize the result */

	/* Handle leading whitespace */
	while (*s == ' ') {
		s++;
	}

	/* Check for a sign (+ or -) */
	if (*s == '-')
	{
		sign = -1; /* Set sign to negative */
		s++;
	}
	else if (*s == '+')
		s++; /* Skip the plus sign */

	/* Iterate through the string and convert digits to an integer */
	while (*s >= '0' && *s <= '9')
	{
		/* Check for potential integer overflow */
		if (result > (INT_MAX - (*s - '0')) / 10)
			return (sign == 1) ? INT_MAX : INT_MIN;
		result = result * 10 + (*s - '0'); /* Convert digit to integer */
		s++;
	}

	/* Apply the sign to the result */
	return (result * sign);
}
