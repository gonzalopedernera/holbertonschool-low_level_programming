#include "lists.h"
/**
 * sum_dlistint - sums all the data (n) of a dlistint_t linked list
 *
 * @head: the list
 *
 * Return: sum or 0 if it fails
 */
int sum_dlistint(dlistint_t *head)
{
	int i, num = 0, res = 0;

	if (head == NULL)
	{
		return (0);
	}

	for (i = 0; head; i++)
	{
		num = head->n;
		res += num;
		head = head->next;
	}
	return (res);
}
