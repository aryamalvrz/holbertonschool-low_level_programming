#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Creating a function to free the doggos
 * @d: Doggos
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->owner);
	free(d->name);
	free(d);
}
