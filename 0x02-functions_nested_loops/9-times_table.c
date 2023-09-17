#include <stdio.h>
#include "main.h"

/**
 * times_table - Print 9 times table
 */
void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int j;
		int ans;

		for (j = 0; j <= 9; j++)
		{
			ans = i * j;

			printf("%2d", ans);

			if (j >= 0 && j<= 8)
			{
				putchar(',');
				putchar(' ');
			}

		}
		putchar('\n');
	}
}
