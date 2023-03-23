#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcpy - copies a string
 *
 * @dest: destination of the copy
 *
 * @src: source of the copy
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;


	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
/**
 * _strlen - calculates the length of a string
 *
 * @s: a string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0';)
	{
		++i;
	}

	return (i);
}
/**
 * new_dog - creates a new dog
 *
 * @name: new dog name
 *
 * @age: new dog age
 *
 * @owner: new dog owner
 *
 * Return: pointer to new dog into, NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
	{
		free(nd);
		return (NULL);
	}
	nd->name = malloc(sizeof(char) * _strlen(name) + 1);
	nd->owner = malloc(sizeof(char) * _strlen(owner) + 1);

	if (nd->name == NULL || nd->owner == NULL)
	{
		free(nd->name);
		free(nd->owner);
		free(nd);
		return (NULL);
	}

	nd->name = _strcpy(nd->name, name);
	nd->age = age;
	nd->owner = _strcpy(nd->owner, owner);
	return (nd);

}
