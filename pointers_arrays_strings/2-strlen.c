#include "main.h"
#include <string.h>

/**
 *_strlen - Returns the length of a string
 *@s: String to check
 *Return: Length of a string
 */

int _strlen(char *s)
{
	int leng = 0;

	while (s[leng] != '\0')
	{
		leng++;
	}
	return (leng);
}
