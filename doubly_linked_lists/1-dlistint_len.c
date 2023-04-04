#include "lists.h"
/**
 * dlistint_len -  returns the number of elements in a linked dlistint_t list
 *
 * @h: the list
 *
 * Return: numver of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int elemcount = 0;

	while (h != NULL)
	{
		elemcount++;
		h = h->next;
	}
	return (elemcount);
}
