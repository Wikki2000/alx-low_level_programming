#include "lists.h"

/**
 * print_listint - Print element in a link list
 * @h: Head pointer to the link list
 *
 * Description: This function print all element of a link list
 *
 * Return: The number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr;

	ptr = h;
	/* Set base for recursive function */
	if (ptr == NULL)
		return (0);

	printf ("%d\n", ptr->n);
	count = 1 + print_listint(ptr->next);

	return (count);
}
