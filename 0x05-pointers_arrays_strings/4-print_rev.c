#include "main.h"
#include <stdio.h>

/**
 * print_rev - Print string in reverse order
 * @s: Pointer pointing to the string
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	/* To get the final character of a string */
	while (s[len] != '\0')
		len++;

	/* To print from last charactacter to initial character */
	for (i = len; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
