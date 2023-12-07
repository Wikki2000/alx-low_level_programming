#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at a given index position
 * @head: pointer to a pointer that point to head node
 * @index: index position to delete node from
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *current;
	unsigned int i;

	i = 0;
	if (*head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		if ((*head)->next != NULL)
			(*head)->next->prev = NULL;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (i = 0; current != NULL && i < index - 1; i++)
		current = current->next;
	if (current == NULL || current->next == NULL)
		return (-1);
	tmp = current->next;
	if (current->next->next != NULL)
		current->next->next->prev = current;
	current->next = current->next->next;
	free(tmp);
	return (1);
}
