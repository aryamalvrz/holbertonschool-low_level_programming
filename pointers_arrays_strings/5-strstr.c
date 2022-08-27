#include "main.h"
#include <stddef.h>

/**
 *_strstr - Locates a substring
 *@haystack: Input string to search in
 *@needle: Input string to locate in haystack
 *
 * Return: Pointer to the beginning of the located substring, or
 * NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, a;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (a = 0; needle[a] != '\0'; a++)
		{
			if (haystack[i + a] != needle[a])
			{
				break;
			}
		}
		if (!needle[a])
		{
			return (&haystack[a]);
		}
	}
	return ('\0');
}
