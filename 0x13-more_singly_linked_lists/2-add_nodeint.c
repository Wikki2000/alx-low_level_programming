#include "lists.h"

/**
 * add_nodeint - Insert a node at the beginning of a linked list.
 * @head: Pointer to the pointer of the head of the list.
 * @n: Integer to insert in the new node.
 *
 * Description: This function inserts a new node
 * at the beginning of the linked list.
 *
 * Return: The address of the new node, or NULL if allocation fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	/* Allocate memory for the new node */
	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	/* Assign the value to the new node */
	new->n = n;
	new->next = *head; /* connect to the rest of the node */

	/* Update the head pointer to point to the new node */
	*head = new;

	return (new);
}
