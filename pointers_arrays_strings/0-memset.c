#include "main.h"

/**
 *_memset - Fills memory with a constant byte
 *@s: String
 *@b: Character/0x00, 0x01
 *@n: Integer
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int idx;

	for (idx = 0; idx < n; idx++)
	{
		s[idx] = b;
	}
	return (s);
}
