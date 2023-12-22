#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in the hash table
 * @ht: The hash table to add/update the key/value pair
 * @key: The key for the element
 * @value: The value associated with the key
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	/* Get the index where the key/value pair should be stored */
	index = key_index((unsigned char *)key, ht->size);

	/* Check if the key already exists in the linked list at the index */
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		/* If the key already exists, update the value and return */
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			return (1);
		}
		current_node = current_node->next;
	}

	/* Create a new node and duplicate the key and value */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	/* Add the new node at the beginning of the linked list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
