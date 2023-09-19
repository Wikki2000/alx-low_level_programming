#include <stdio.h>
#include "main.h"
/**
 * print_rev - Print string in reverse order without spaces
 * @s: Pointer pointing to the string
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	/* To get the final character of a string */
	while (*s != '\0')
	{
		len++;
		s++;
	}
	/* Move the pointer back to the last non-space character */
	s--;

	/* To print from last character to initial character */
	for (i = len - 1; i >= 0; i--)
	{
		if (*s != ' ')
			putchar(*s);
		s--; /* Move the pointer to the previous character */
	}
	putchar('\n');
}
