#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a dog structure
 *
 * @d: pointer to the dog structure to work on
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
		d = malloc(sizeof(struct dog));

	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
