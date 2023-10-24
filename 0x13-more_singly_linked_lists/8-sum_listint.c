#include "lists.h"

/**
 * sum_listint - Calculate sum of integer in a link list
 * @head: Head pointer to the first node in a link list
 *
 * Return: The sum of integer in a link list
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	ptr = head;
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
