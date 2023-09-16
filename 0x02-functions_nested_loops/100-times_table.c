#include <stdio.h>

/**
 * void print_times_table -  prints the n times table, starting with 0
 * @n: The array of time table to print
 */
void print_times_table(int n)
{
	int i;
	int j;
	int ans;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			ans = i * j;
			printf("%3d", ans);

			if (j != n)
			{
				putchar(',');
				putchar(' ');
			}
		}

		putchar('\n');
	}
	putchar('\n');
}
