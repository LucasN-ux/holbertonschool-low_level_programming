#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a 2 dimensional grid
 * @d: pointer to dog_t
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		free(d->name);

	if (d->owner != NULL)
		free(d->owner);

	free(d);
}
