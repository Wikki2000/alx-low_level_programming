#include "lists.h"

/**
 * pop_listint - Delete the first node of the link list
 * @head: The head pointer to the first node of the link list
 *
 * Return: The data of the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (-1);

	data = (*head)->n; /* Store data from the head node */
	temp = *head; /* Create temp ptr to the head node */
	(*head) = (*head)->next; /* Update head ptr to point to next node */
	free(temp);

	return (data);
}
