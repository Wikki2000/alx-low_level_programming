#include "lists.h"

/**
 * free_list - Frees a linked list of list_t nodes.
 * @head: A pointer to the head of the list.
 */
void free_list(list_t *head)
{
	list_t *current; /* Create a temporary pointer. */

	while (head != NULL) /* Iterate through the list. */
	{
		current = head; /* Save the current node. */
		head = head->next; /* Move to the next node. */
		free(current->str); /* Free the string. */
		free(current); /* Free the node itself. */
	}
}

