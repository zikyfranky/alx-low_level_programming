#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * free_dog - Free the dog
 * @d: pointer to the dog~
 *
 */

void free_dog(dog_t *d)
{
	if (!d)
	{
		if (!d->owner)
			free(d->owner);

		if (!d->name)
			free(d->name);

		free(d);
	}
}
