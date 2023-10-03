#include "main.h"

/**
 * _isdigit - Check if a value is a digit or letter
 * @c: The parameter to be checked
 *
 * This function checks for a digit (0 through 9.
 *
 * Return:Always (1) if it a digit otherwise (0)
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
