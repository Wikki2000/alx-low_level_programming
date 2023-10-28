#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: A pointer to the head of the linked list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *next, *temp;

	current = *h;
	for (size = 0; current != NULL; size++)
	{
		next = current->next;
		current->next = NULL;
		temp = current;
		current = next;
		free(temp);

		if (current == *h)
		{
			*h = NULL;
			break;
		}
	}

	return (size);
}
