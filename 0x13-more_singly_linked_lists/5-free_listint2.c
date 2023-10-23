#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list using recursion and sets the head to NULL.
 * @head: A pointer to a pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;

	free_listint2(&(*head)->next);
	free(*head);

	*head = NULL;
}
