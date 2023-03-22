#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - get length of string
 * @str: string whose length we want to get
 * Return: integer value of length
 */

int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - copy some string
 * @dest: copy to this place
 * @src: copy from hers
 * Return: the copied pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i, len1;

	len = _strlen(src);
	for (i = 0; i < len1; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: who owns the dog
 * Return: pointer to the created dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	n_d = malloc(sizeof(dog_t));
	if (n_d == NULL)
		return (NULL);
	n_d->name = malloc(sizeof(char) * (len1 + 1));
	if (n_d->name == NULL)
	{
		free(n_d);
		return(NULL);
	}
	n_d->owner = malloc(sizeof(char) * (len2 + 1));
	if (n_d->owner == NULL)
	{
		free(n_d->name);
		free(n_d);
		return (NULL);
	}
	_strcpy(n_d->age,age);
	_sttcpy(n_d->owner,owner);
	n_d->age = age;
	return (n_d);
}
