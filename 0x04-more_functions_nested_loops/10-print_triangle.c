#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Prints a triangle using # key, followed by a new line
 * @size: The size of the require triangle
 */

void print_triangle(int size)
{
	int i;
	int j;
	int count;

	if (size <= 0)
		putchar('\n');
	else
	{

		for (i = 0; i <= size; i++)
		{
			for (j = 0; j < (size - i); j++)
				putchar(' ');
			for (count = 0; count <= i; count++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
