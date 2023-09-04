#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - the fuction that initializes a variable of type struct dog
 * @name: the name
 * @age: the age
 * @owner: the owner
 * @d: the pointer
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL || name == NULL || owner == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
		d->name = name;
		d->age = age;
		d->owner = owner;

}
