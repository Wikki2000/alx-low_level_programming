#include "main.h"

/**
 * list_len - Count the number of element in link list
 * @h: Pointer to the first node
 *
 * Return: The number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h->next;
	}

	return (count);
}
