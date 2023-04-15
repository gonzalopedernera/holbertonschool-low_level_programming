#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: hash table
 *
 * @key: key for the new element
 *
 * @value: content asociated with the key
 *
 * Return: 1 if success, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newnode, *currnode;

	if (key == NULL || ht == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	currnode = ht->array[index];

	if (currnode && strcmp(key, currnode->key) == 0)
	{
		free(currnode->value);
		currnode->value = strdup(value);
		return (1);
	}

	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);

	newnode->key = strdup(key);
		if (key == NULL)
			return (0);

	newnode->value = strdup(value);
		if (newnode == NULL)
			return (0);

	newnode->next = ht->array[index];
	ht->array[index] = newnode;
	return (1);
}
