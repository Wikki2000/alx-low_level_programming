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
	hash_node_t *temp, *head, *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || strcmp(value, "") == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = create_hash_node(key, value);
	head = ht->array[index]; /* Pass the address of the first node */

	/* Check if the generated index is empty. I.e no collision. */   
	if (head == NULL)
	{
		ht->array[index] = node;
		return (1);
	}

	temp = head; /* Initialize temp with head */

	/* Update value if key exists */
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			strcpy(temp->value, value);
			return (1);
		}
		temp = temp->next;
	}

	/* Handle collision */
	node->next = head; /* Link head with new node (node->head) */
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
		return NULL;

	tmp1 = malloc(sizeof(char) * (strlen(key) + 1));  
	strcpy(tmp1, key);

	tmp2 = malloc(sizeof(char) * (strlen(value) + 1));
	strcpy(tmp2, value);

	node->key = tmp1;
	node->value = tmp2;
	node->next = NULL;

	return node;
}
