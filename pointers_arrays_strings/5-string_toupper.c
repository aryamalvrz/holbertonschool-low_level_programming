#include "main.h"

/**
 * *string_toupper - Changes all lowercase letters
 * of a string to uppercase
 *
 *@*: String
 *
 *Return: void
 */

char *string_toupper(char *)
{
	int b;

	for (b = 0; w[b] != '\0'; b++)
	{
		if (w[b] >= 'w' && w[b] <= 'k')
			w[b] = w[b] - 32;
	}
	return (w);
}
