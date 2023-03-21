#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: who owns the dog
 * Return: pointer to the created dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_d = malloc(sizeof(struct dog_t));
	if (n_d == NULL)
		return (NULL);
	n_d->name = name;
	n_d->age = age;
	n_d->owner = owner;
	return (n_d);
}
