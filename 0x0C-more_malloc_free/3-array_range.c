#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers
 * @min: Minimum number of an array
 * @max: Maximum number of an array
 *
 * This function create an array of number ranging from min to max number
 *
 * Return: Rointer to the newly created array, else return NULL if malloc fail
 */
int *array_range(int min, int max)
{
	int i, size;
	int *ptr;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	ptr = (int *) malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = min + i;
	return (ptr);
}
