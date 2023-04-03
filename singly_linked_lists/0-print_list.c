#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: pointer to a list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int nodenum = 0;

	while (h != NULL)
	{
		printf("[%d] ", h->len);
		if (h->str == NULL)
		{
			printf("(nill)\n");
		}
		else
		{
		printf("%s\n", h->str);
		}

		nodenum++;
		h = h->next;
	}
return (nodenum);
}
