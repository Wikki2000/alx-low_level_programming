#include "lists.h"

/**
 * add_dnodeint - add node to the beginning of a doubly lineked list
 * @head: pointer to pointer that point to head node
 * @n: data to store in the new node
 * Return: address of the new node or NULL if failure occur
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
