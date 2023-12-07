#include "lists.h"

/**
 * add_dnodeint_end - add node to the end of a doubly lineked list
 * @head: pointer to pointer that point to head node
 * @n: data to store in the new node
 * Return: address of the new node or NULL if failure occur
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = *head;
		*head = new;
		return (new);
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;
	new->prev = last;
	new->next = NULL;
	last->next = new;
	return (new);
}
