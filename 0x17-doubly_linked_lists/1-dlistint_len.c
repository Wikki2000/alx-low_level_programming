#include "lists.h"

/**
 * dlistint_len - return length of a doubly linked list
 * @h: head pointer to the linked list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count;

	if (h == NULL)
		return (0);
	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
