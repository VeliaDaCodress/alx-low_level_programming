#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Creating a new structure for dogs
 * @name: The name of the dog
 * @age: how old is the dog
 * @owner: who owns the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
