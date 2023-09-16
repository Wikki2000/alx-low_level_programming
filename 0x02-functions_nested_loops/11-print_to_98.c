#include <stdio.h>

/**
 * print_to_98 - Print any number upto 98
 * @n: The starting point of the number
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
		printf("%d, ", n);

	for (n = 0; n >= 98; n--)
		printf("%d, ", n);

	printf("\n");
}
