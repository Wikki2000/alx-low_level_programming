#include "lists.h"

/**
 * add_dnodeint - Insert a node at the beginning of a link list
 * @head: Head pointer to the list
 * @n: Data to insert in the link list
 *
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	
	if (head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
