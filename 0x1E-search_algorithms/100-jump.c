#include "search_algos.h"
#include <math.h>

/**
 * jump_search - jump search alog
 *
 * Desciprtion: in jump search we iterate the array in steps
 * the steps here are sqrt of n when we find the range we use
 * linear search to find the value in the range
 *
 * @array: pointer to array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of the value or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, n = (size_t) sqrt(size);

	if (!array)
		return (-1);
	for (i = 0; i < size; i += n)
	{
		if (value <= array[i])
			break;
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	if (i == 0)
		i = n;
	printf("Value found between indexes [%ld] and [%ld]\n", i - n, i);

	for (n = i - n; n < size && n <= i ; n++)
	{
		printf("Value checked array[%ld] = [%d]\n", n, array[n]);
		if (array[n] == value)
			return ((int) n);
	}
	return (-1);
}
