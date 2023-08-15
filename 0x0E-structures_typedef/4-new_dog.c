#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * *new_dog - function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * dog_t - typedef structure dog
 *
 * Return: pointer on success, NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = (dog_t *) malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = (char *) malloc(strlen(name) * sizeof(char) + 1);
	dog->owner = (char *) malloc(strlen(owner) * sizeof(char) + 1);
	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	strcpy(dog->name, name);
	strcpy(dog->owner, owner);

	dog->age = age;

	return (dog);
}
