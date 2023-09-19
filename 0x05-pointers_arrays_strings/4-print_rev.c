#include <stdio.h>

/*
 * print_rev - Print string in reverse order
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

	/* To print from last charactacter to initial character */
	for (i = len ; i >= 0; i--)
	{
		if (i >= len && *s == ' ')
			putchar('\b');
		else
			putchar(*s);
		s--; /* Move the pointer to the previous character */
	}
	putchar('\n');
}
