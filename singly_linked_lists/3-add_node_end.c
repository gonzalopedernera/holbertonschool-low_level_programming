#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - calculates the length of a string
 *
 * @s: a string
 *
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0';)
	{
		++i;
	}

	return (i);
}
/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: the list
 *
 * @str: content of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *lastnode;
	int i;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = _strlen(str);
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		if (str != NULL)
		{
			lastnode = *head;
			for (i = 0; lastnode->next != NULL; i++)
			{
				lastnode = lastnode->next;
			}
			lastnode->next = newnode;
		}
		else
		{
			return (NULL);
		}
	}
	return (lastnode);
}
