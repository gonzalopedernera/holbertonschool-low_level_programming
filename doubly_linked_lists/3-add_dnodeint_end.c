#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *
 * @head: list to add node to
 *
 * @n: data to copy in new node
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *lastnode;
	int i;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		if (head != NULL)
		{
			lastnode = *head;
			for (i = 0; lastnode->next != NULL; i++)
			{
				lastnode = lastnode->next;
			}
			lastnode->next = newnode;

			if (*head)
			{
				(*head)->prev = newnode;
			}
		}
		else
		{
			return (NULL);
		}
	}
	return (lastnode);
}
