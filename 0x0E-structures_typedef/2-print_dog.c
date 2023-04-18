#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints every member of the dog structure
 *
 * @d: pointer to the dog structure to work on
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
}
