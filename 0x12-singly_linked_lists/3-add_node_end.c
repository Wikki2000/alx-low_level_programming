#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: A double pointer to the head of the linked list.
 * @str: The string to be added to the new node.
 *
 * Return: A pointer to the head of the updated linked list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *ptr;
	int len = 0;

	while (str[len] != '\0')
		len++;

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		return (new_node);

	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = new_node;

	return (*head);
}
