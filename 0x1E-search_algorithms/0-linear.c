#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * @array: Pointer to the first item of the array.
 * @size: Size of the array.
 * @value: Item to search for in the array.
 *
 * Return: Index of search values on sucess, else -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked  array[%u] = [%d]\n", (unsigned int)index, value);

		/* Check if value is found in an array */
		if (array[index] == value)
			return (index);
	}

	/* Return -1 if value not found in an array */
	return (-1);
}
