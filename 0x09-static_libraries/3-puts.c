#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints any given string
 * @str: The pointer string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
