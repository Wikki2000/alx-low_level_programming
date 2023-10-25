#include "lists.h"

/**
 * listint_len - Print element in a link list
 * @h: Head pointer to the link list
 *
 * Description: This function print all element of a link list
 *
 * Return: The number of node
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr;

	ptr = h;
	if (ptr == NULL)
		return (0);

	count = 1 + listint_len(ptr->next);
	return (count);
}

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position.
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new;
	unsigned int i, len_list;


	/* Allocate memory for new node */
	new = (listint_t *) malloc(sizeof(listint_t));

	/* Check if memory allocation fails */
	if (new == NULL)
		return (NULL);

	/* Assign values to new node */
	new->n = n;
	new->next = NULL;

	len_list = listint_len(*head); /* Find lenght of link list */

	/* If idx is 0, insert at the beginning */
	if (idx == 0)
	{
		new->next = (*head);
		(*head) = new;
		return (new);
	}
	else if (idx > len_list)
		return (NULL);
	ptr = (*head);
	/*
	 * Traverse the list until you reach
	 * one step lower than the desired index (id)
	 */
	for (i = 0; ptr && i < idx - 1; i++)
		ptr = ptr->next;

	/* Update the new node to connect the address of the node in front */
	new->next = ptr->next;
	ptr->next = new; /* Insert new node */
	return (new);
}
