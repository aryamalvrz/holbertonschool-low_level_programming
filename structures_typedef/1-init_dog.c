#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: Address of structure
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Name of the owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
