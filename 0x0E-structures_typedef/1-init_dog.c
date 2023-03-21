#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialize a new dog type
 * @d: pointer to thw dog struct being initialized
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}