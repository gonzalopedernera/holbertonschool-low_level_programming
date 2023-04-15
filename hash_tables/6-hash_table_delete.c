#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp1, *tmp2;
	unsigned long int hsize, i;
	int j;

	if (ht)
	{
		hsize = ht->size;

		for (i = 0; i < hsize; i++)
		{
			if (ht->array[i] != NULL)
			{
				tmp2 = ht->array[i];
				for (j = 0; tmp2 != NULL; j++)
				{
					tmp1 = tmp2->next;
					free(tmp2->key);
					free(tmp2->value);
					free(tmp2);
					tmp2 = tmp1;
				}
				tmp1 = tmp2;
				free(tmp1);
			}
		}
		free(ht->array);
		free(ht);
	}
}
