#include "hash_tables.h"
/**
 * hash_table_create - creates a new hash table
 *
 * @size: size of the array contained in the newly created hash table
 *
 * Return: a pointer to the location of the new hash table, or NULL if fail
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newhash;
	hash_node_t **node;
	unsigned long int i;

	if (size < 1)
	{
		return (NULL);
	}
	newhash = malloc(sizeof(hash_table_t));

	if (newhash == NULL)
	{
		return (NULL);
	}

	newhash->size = size;
	node = malloc(sizeof(hash_node_t *) * size);
	if (node == NULL)
	{
		free(newhash);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		node[i] = NULL;
	}
	newhash->array = node;

	return (newhash);
}
