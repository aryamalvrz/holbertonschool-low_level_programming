#include "main.h"

/**
 *_strcat - Appends source to destination string, terminating '\0'
 *@dest: destination
 *@src: source
 *Return: Pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int g, o;

	g = 0;
	while (dest[g] != '\0')
	{
		g++;
	}
	o = 0;
	while (src[o] != '\0')
	{
		dest[g] = src[o];
		g++;
		o++;
	}
	return (dest);
}
