#include "lists.h"

/**
 * print_listint_safe - Print a listint_t linked list.
 * @head: A pointer to the head of the linked list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);

		count++;

		/*
		 * Check if loop occur during printing,
		 * and print the address and data of this node where loop occur.
		 */
		if (head <= head->next)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			exit(98);
		}
		head = head->next;
	}

	return (count);
}
