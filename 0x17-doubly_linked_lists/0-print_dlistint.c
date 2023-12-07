#include "lists.h"

/**
 * print_dlistint - Print each item of a double link list
 * @h: Head pointer to the double link list
 *
 * Return: The count of the item printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = NULL;
	int count = 0;

	temp = h;
	if (temp != NULL)
	{
		printf("%d\n", temp->n);
		count = 1 + print_dlistint(temp->next);
	}
	return (count);
}
