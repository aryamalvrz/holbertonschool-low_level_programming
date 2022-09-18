#include "main.h"

/**
 * _calloc - Allocates memory for an array, using malloc
 * @nmemb: Number of members
 * @size: Size
 *
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, a = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = nmemb * size;
	p = malloc(a);
	if (p == NULL)
		return (NULL);
	while (i < a)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
