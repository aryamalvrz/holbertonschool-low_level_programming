#include "main.h"

/**
 * create_array - Creates an array of chars, and
 * initializes it with a specific char
 *
 * @size: Size of the array
 * @c: Char to initialize the array
 *
 * Return: Pointer to the array or NULL if fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
