#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - frees dogs memory
 *
 * @d: pointer to a dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free (d->name);
		free (d->owner);
		free (d);
	}
}
