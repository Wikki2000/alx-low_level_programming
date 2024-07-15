#include "search_algos.h"
#include <math.h>


/**
 * step_list - gives the next list after n steps
 *
 * @list: pointer to node
 * @n: number of steps
 *
 * Return: pointer to the next node
 */
listint_t *step_list(listint_t *list, size_t n)
{
	listint_t *node = list;

	for (; node->next && n; n--, node = node->next)
		;
	return (node);
}


/**
 * jump_list - jump search alog in linked list
 *
 * Desciprtion: in jump search we iterate the linked list in steps
 * the steps here are sqrt of n when we find the range we use
 * linear search to find the value in the range
 *
 * @list: pointer to linked list
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of the value or -1
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t n = (size_t) sqrt(size);
	listint_t *start, *end;

	if (!list)
		return (NULL);
	for (start = list; start->index < size; start = end)
	{
		end = step_list(start, n);
		printf("Value checked at index [%ld] = [%d]\n", end->index, end->n);
		if (value <= end->n || !end->next)
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			start->index, end->index);

	for (; start && start != end->next ; start = start->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", start->index,
				start->n);
		if (start->n == value)
			return (start);
	}
	return (NULL);
}
