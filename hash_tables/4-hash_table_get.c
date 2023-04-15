#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: a hash table
 *
 * @key: the key whose value we are looking for
 *
 * Return: the vale, or NULL if fail
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *rtval;
	hash_node_t *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];

	if (tmp == NULL)
		return (NULL);

	if (strcmp(tmp->key, key) == 0)
	{
		rtval = tmp->value;
		return (rtval);
	}

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			rtval = tmp->value;
			return (rtval);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
