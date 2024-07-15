#include "search_algos.h"


/**
 * print_list - prints alist
 *
 * @array: pointer to array
 * @start: the index start printing from
 * @end: last index to print
 *
 */
void print_list(int *array, size_t start, size_t end)
{
	printf("Searching in array: ");
	for (; start < end; start++)
	{
		printf("%d, ", array[start]);
	}
	printf("%d\n", array[start]);
}


/**
 * devide - all the logic of binary search
 *
 * @array: pointer to array
 * @start: the index start printing from
 * @end: last index to print
 * @value: value to look for
 *
 * Return: index of value or -1
 */
int devide(int *array, size_t start, size_t end, int value)
{
	int mid = (end - start) / 2 + start;

	if (end < start)
		return (-1);

	print_list(array, start, end);

	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return (devide(array, start, mid - 1, value));
	else
		return (devide(array, mid + 1, end, value));
}


/**
 * exponential_search - Exponential search alog
 *
 * Desciprtion: compining jump and binary search as powers as the steps
 *
 * @array: pointer to array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of the value or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, n = 0;

	if (!array)
		return (-1);
	for (i = 1; i < size; i *= 2)
	{
		if (value <= array[i])
			break;
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		n = i;
	}
	if (i >= size)
		i = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", n, i);

	return (devide(array, n, i, value));
}
