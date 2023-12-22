#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: pointer to a hash table
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, count;
	hash_node_t *head;

	if (ht == NULL)
		return;
	count = hash_node_count(ht);
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		head = ht->array[index];
		while (head)
		{
			printf("'%s': '%s'", head->key, head->value);
			if (count > 1)
			{
				printf(", ");
				count--;
			}
			head = head->next;
		}
	}
	printf("}\n");
}



/**
 * hash_node_count - count a hash node inside a hash table
 * @ht: pointer to the hash table
 * Return: number of the items inside the hash table
 */

unsigned long int hash_node_count(const hash_table_t *ht)
{
	unsigned long int i, count = 0;
	hash_node_t *head;

	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while (head)
		{
			count++;
			head = head->next;
		}
	}
	return (count);
}
