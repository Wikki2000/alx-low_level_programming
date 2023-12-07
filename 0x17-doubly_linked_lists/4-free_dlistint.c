#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list.
 * @head: A pointer to the head of the list.
 *
 * This function frees the memory allocated for each node.
 * It uses recursion to traverse the entire list and free each node.
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free_dlistint(head->next);
		free(head);
	}
}
