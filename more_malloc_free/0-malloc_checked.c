#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size to allocate
 *
 * Return: Pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);

	if (m == NULL)
	{
		exit(98);
	}
	return (m);
}
