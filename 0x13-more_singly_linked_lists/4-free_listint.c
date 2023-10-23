#include "lists.h"


/**
 * free_listint - Frees a linked list of type listint_t.
 * @head: A pointer to the head of the list.
 *
 * Description: This function recursively frees each node and the memory it
 * occupies, starting from the last (tail) node to the first (head) node.
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);
	free(head);
}
