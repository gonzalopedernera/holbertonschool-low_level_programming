#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *
 * @head: the list
 *
 * @index: number of the node to find
 *
 * Return: node to finf, or NULL if it fails
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (i < index)
	{
		if (temp->next)
		{
			temp = temp->next;
			i++;
		}
		else
		{
			return (NULL);
		}
	}
	return (temp);
}
