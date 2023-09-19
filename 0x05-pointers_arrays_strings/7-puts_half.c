#include "main.h"
#include <stdio.h>

/**
 * puts_half - Print half of a string
 * @str: Pointer to the string variable
 */
void puts_half(char *str)
{
	int length = 0;
	int i;
	int start;

	while (str[length] != '\0')
		length++;

	start = length / 2;

	if (length % 2 != 0)
		start = (length - 1) / 2;

	for (i = start; i < length; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
