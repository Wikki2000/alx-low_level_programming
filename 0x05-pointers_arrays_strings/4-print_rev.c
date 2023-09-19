#include <stdio.h>
#include "main.h"
/*
 * print_rev_no_spaces - Print string in reverse order without spaces
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


	/* To print from last character to initial character */
	for (i = len; i >= 0; i--)
	{
		if (*s == ' ' && i >= len - 1)
		{
			putchar('\b');
		}
		else
			putchar(*s);
		s--; /* Move the pointer to the previous character */
	}
	putchar('\n');
}
