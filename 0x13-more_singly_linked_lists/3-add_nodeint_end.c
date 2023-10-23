#include "lists.h"

/**
 * add_nodeint - Insert the node at the end of the link list
 * @head: Pointer to the link list
 * @n: Integer to insert in the new node
 *
 * Description: This function insert the node at the end of the link list
 *
 * Return: The address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *ptr;

	/* Allocate memory for the new node */
	new = (listint_t *) malloc(sizeof(listint_t));

	/* Check if memory allocation fails */
	if (new == NULL)
		return (NULL);

	/* Assign value to new node */
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	ptr = *head;

	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new; /* Link the new node */

	return (new);
}
