#include "search_algos.h"


/**
 * linear_skip - jump search algo in a skiplist
 *
 * Desciprtion: in jump search we iterate the skiplist in steps
 * the steps here are sqrt of n when we find the range we use
 * linear search to find the value in the range
 *
 * @list: pointer to skiplist
 * @value: value to search for
 *
 * Return: index of the value or -1
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *start, *end;

	if (!list)
		return (NULL);
	for (start = list; start->next; start = end)
	{
		end = start->express;
		printf("Value checked at index [%ld] = [%d]\n", end->index, end->n);
		if (value <= end->n)
			break;
		else if (!end->express)
		{
			for (start = end; end->next; end = end->next)
				;
			break;
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			start->index, end->index);

	for (; start && start != end->next ; start = start->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", start->index, start->n);
		if (start->n == value)
			return (start);
	}
	return (NULL);
}
