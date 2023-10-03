#include "main.h"

/**
 * puts2 - Print every other character of a string
 * @str: Pointer to the input string
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2; /* Move to the next character */
	}

	_putchar('\n'); /* Print a newline character to end the line */
}

