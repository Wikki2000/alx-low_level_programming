#include "lists.h"

/**
 * sum_dlistint - Add element of a link list
 * @head: Head pointer to the link list
 *
 * Return: The sum of the element
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
