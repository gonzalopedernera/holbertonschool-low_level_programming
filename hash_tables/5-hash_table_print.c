#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - prints a hash table
 *
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, hsize;
	hash_node_t *tmp;
	int printed = 0, j;

	if (ht != NULL)
	{
		printf("{");
		hsize = ht->size;
		for (i = 0; i < hsize; i++)
		{
			tmp = ht->array[i];
			for (j = 0; tmp != NULL; j++)
			{
				if (printed)
					printf(", ");

				printf("'%s': '%s'", tmp->key, tmp->value);
				printed = 1;
				tmp = tmp->next;
			}
		}
		printf("}\n");
	}
}
