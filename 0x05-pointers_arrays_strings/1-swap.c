#include <stdio.h>
#include "main.h"

/**
 * swap_int - Swap the value of two integer
 * @a: The first integer to be swap
 * @b: The second integer to be swap
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
