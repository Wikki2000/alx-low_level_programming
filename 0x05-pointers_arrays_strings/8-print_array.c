#include <stdio.h>
#include "main.h"

/**
 * print_array - Print any gien number of integer
 *
 * @a: pointer to the integer
 * @n: Number of integer to be print
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i != 0)
				printf(", ");
			printf("%d", *a);
			a++;
		}
	}
	putchar('\n');
}
