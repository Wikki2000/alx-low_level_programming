#include "lists.h"

/**
 * reverse_listint - Reverse element in link list
 * @head: The head pointer to the first node of the link list
 *
 * Return: The head pointer to the first node of the link list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = NULL;


	while (*head != NULL)
	{
		current = (*head)->next; /* Store the next node */
		(*head)->next = prev;
		prev = (*head);  /* Move 'prev' to the current node */
		(*head) = current; /* Move 'head' to the next node */
	}

	*head = prev; /* Update the head to point to the new head */
	return (*head);
}

