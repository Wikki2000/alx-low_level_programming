#include "lists.h"
/**
 * print_listint - Print element in a link list
 * @h: Head pointer to the link list
 * 
 * Description: This function print all element of a link list
 *
 * Return: The number of node
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr;

	ptr = h;
	if (ptr == NULL)
		return (0);

	count = 1 + listint_len(ptr->next);

	return (count);
}
