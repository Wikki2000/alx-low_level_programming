#include "search_algos.h"

/**
 * interpolation_search - interpolation search alog
 *
 * Desciprtion: in interpolation search we try to guese the
 * index where the value might be using a formela if it is
 * not we narrow the search and do it again simple :D
 *
 * @array: pointer to array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of the value or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high = size - 1;
	size_t low = 0;
	size_t pos;

	if (!array)
		return (-1);

	do {
		pos = low + (((double) (high - low) / (array[high]
						- array[low])) * (value - array[low]));
		printf("Value checked array[%ld] ", pos);

		if (pos < low || pos > high)
			break;

		printf("= [%d]\n", array[pos]);

		if (value == array[pos])
			return ((int) pos);
		else if (value < array[pos])
			high = pos - 1;
		else
			low = pos + 1;
	} while (high >= low && value >= array[low] && value <= array[high]);

	printf("is out of range\n");

	return (-1);
}
