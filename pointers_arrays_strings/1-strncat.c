#include "main.h"

/**
 * *_strncat - A function that concetenates 2 strings
 *this function is similar to _strcat, except it will use
 *at most n bytes from src, and src does not need to be null terminated
 *if it contains n or more bytes
 *
 *@dest: destination
 *@src: source
 *@n: bytes
 *Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int g, o;

	for (g = 0; dest[g] != '\0'; g++)
		;
	for (o = 0; o < n && src[o] != '\0'; o++)
	{
		dest[o + g] = src[o];
	}
	return (dest);
}
