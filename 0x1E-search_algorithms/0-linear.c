#include "search_algos.h"


/**
 * linear_search - checking all the array to find value
 *
 * @array: pointer to array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of the value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int) i);
	}
	return (-1);
}
