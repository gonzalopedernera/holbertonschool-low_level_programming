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
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: begining of the list
 *
 * @str: content of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	newnode->next = *head;
	*head = newnode;
	newnode->len = _strlen(str);
	}
	return (newnode);
}
