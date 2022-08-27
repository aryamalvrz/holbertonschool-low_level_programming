#include "main.h"

/**
 *_memcpy - Copies memory area (ma)
 *@dest: Area destination to copy
 *@src: Area to be copied
 *@n: Number of bytes
 *
 * Return: ma (pointer to destination)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ma = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (ma);
}
