#include "hash_tables.h"

/**
 * hash_table_delete - delete a given hash table
 * @ht: pointer to the hash table to delete
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node_item, *tmp;
	unsigned long int index;

	for (index = 0; index < ht->size; index++)
	{
		node_item = ht->array[index];
		while (node_item)
		{
			tmp = node_item;
			node_item = node_item->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht);
}
