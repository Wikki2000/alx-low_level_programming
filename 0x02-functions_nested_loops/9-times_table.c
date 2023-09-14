#include <stdio.h>
#include "main.h"

/**
 * times_table - Print times table
 */
void times_table(void)
{
	/* using i as row and j as column */
	int i;
	int j;

	for (i = 0; i <= 9; i++)

		for (j = 0; j <= 9; j++)
		{
			int  result = i * j;

			printf("%2d, ", result);
		}
	_putchar(10);
}
