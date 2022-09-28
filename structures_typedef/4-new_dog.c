#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - Creating a function for a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: New dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
	{
		return (NULL);
	}

	n_dog->name = malloc(sizeof(char) * strlen(name) + 1);

	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}

	n_dog->owner = malloc(sizeof(char) * strlen(owner) + 1);

	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	strcpy(n_dog->name, name);
	strcpy(n_dog->owner, owner);
	n_dog->age = age;

	return (n_dog);
}
