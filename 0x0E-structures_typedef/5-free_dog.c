#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees memory
 * @d: the pointer
 *
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
