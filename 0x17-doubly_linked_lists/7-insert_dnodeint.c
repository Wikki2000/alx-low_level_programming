#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at any given index position
 * @h: pointer to the pointer that point to the head
 * @idx: index position to insert the node
 * @n: data of the new node
 * Return: the address of the new node or NULL if it fails.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	unsigned int i;

	i = 0;
	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL && idx > 0)
	{
		free(new);
		return (NULL);
	}
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	tmp = *h;
	for (i = 0; tmp != NULL && i < idx - 1; i++)
		tmp = tmp->next;
	if (tmp == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = tmp->next;
	new->prev = tmp;
	if (tmp->next != NULL)
		tmp->prev =  new;
	tmp->next = new;
	return (new);
}
