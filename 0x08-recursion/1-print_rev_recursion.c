#include "main.h"

/**
 * _print_rev_recursion - Print a string in reverse order
 * @s: pointer to the string to print in reverse order
 *
 * This function print any given string in reverse order
 *
 * Returns: Void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
