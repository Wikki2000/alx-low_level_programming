#include "lists.h"

/**
 * dlistint_len - Count the number of element in the list
 * @h: The head pointer to the list
 *
 * Return: The number of element in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	int count = 0;

	if (h == NULL)
		return (0);

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
