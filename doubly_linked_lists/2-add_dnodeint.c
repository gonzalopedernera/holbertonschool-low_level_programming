#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 * @head: begining of the list
 *
 * @n: content to be copied in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (n == '\0' || head == NULL)
	{
		return (NULL);
	}
	else
	{
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	newnode->next = *head;
	newnode->prev = NULL;
	*head = newnode;
	return (newnode);
	}
}
