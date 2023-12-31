#include <stdio.h>

/**
 * print_times_table -  prints the n times table, starting with 0
 * @n: The array of time table to print
 */
void print_times_table(int n)
{
	int i;
	int j;
	int ans;

	if (n > 0 &&  n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				ans = i * j;

				printf("%3d ", ans);

				if (j >= 0 && j <  n)
				{
					putchar(',');
					putchar(' ');
				}
			}

			putchar('\n');
		}
	}
		else
			putchar('\n');
}
