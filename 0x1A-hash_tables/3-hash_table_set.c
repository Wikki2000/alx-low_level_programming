#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: key
 * @value: value
 * Return: 1 - success, 0 - failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	const char *new_value;
	unsigned long int index;
	hash_node_t *node, *head, *tmp;

	if (ht == NULL || !key)
		return (0);
	new_value = value == NULL ? "" : value;
	node = create_hash_node(key, new_value);
	if (node == NULL)
		return (0);
	/* create an array index using the hash_djb2 algorithm */
	index = key_index((const unsigned char *)key, ht->size);
	/* check if the node already exit in the table */
	head = ht->array[index];
	if (head == NULL)
	{
		ht->array[index] = node;
		return (1);
	}
	tmp = head;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			strcpy(tmp->value, value);
			return (1);
		}
		tmp = tmp->next;
	}
	node->next = head;
	ht->array[index] = node;
	return (1);
}

/**
 * create_hash_node - create a hash node
 * @key: key of the node
 * @value: value of the node
 * Return: key/value pair structued memory
 */

hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *node;
	char *tmp1, *tmp2;

	node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	tmp1 = malloc(sizeof(char) * (strlen(key) + 1));
	strcpy(tmp1, key);
	tmp1[strlen(key)] = '\0';
	node->key = tmp1;
	tmp2 = malloc(sizeof(char) * (strlen(value) + 1));
	strcpy(tmp2, value);
	tmp2[strlen(value)] = '\0';
	node->value = tmp2;
	node->next = NULL;
	return (node);
}
