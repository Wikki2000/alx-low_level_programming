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

	if (array[mid] > value || (mid != 0 && array[mid - 1] == value))
		return (devide(array, start, mid, value));
	else if (array[mid] == value)
		return (mid);
	else
		return (devide(array, mid + 1, end, value));
}


/**
 * advanced_binary - binary search algo
 *
 * Descition: searching the array for value using devide and
 * conquer by spliting the array to halfs the searching the
 * half the are most likely to containe the value and finds
 * first appearance of the value in the array
 *
 * @array: pointer to array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of the value or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	int i;

	if (!array)
		return (-1);

	i = devide(array, 0, size - 1, value);

	return (i);
}
