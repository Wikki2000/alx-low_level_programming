#include "lists.h"

/**
 * listint_len - Find the number of node in a link list
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
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: Pointer to the first node of the link list
 * @index: The index number of the node to return
 *
 * Return: The pointer to the selected node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr;
	unsigned int len_list;


	len_list = listint_len(head);
	if (head == NULL || index > len_list)
		return (NULL);

	ptr = head;

	for (i = 0; ptr && i < index; i++)
		ptr = ptr->next;

	return (ptr);
}
