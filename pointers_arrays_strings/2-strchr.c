#include "main.h"
#include <stddef.h>

/**
 *_strchr - Locates a char in a string
 *@s: String to search in
 *@c: Characters to look for
 *
 * Return: Pointer to c or NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (c == *s)
	{
		return (s);
	}
	return (NULL);
}
