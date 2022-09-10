#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space
 * in memory which contains a copy of the strng given as
 * a parameter
 *
 *@str: String
 *
 * Return: void
 */

char *_strdup(char *str)
{
	int i, lenght;
	char *p;

	if (str == NULL)
		return (NULL);

	for (lenght = 0; str[lenght] != '\0'; lenght++)

		p = malloc(sizeof(char) * lenght + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < lenght; i++)
		p[i] = str[i];
	return (p);
}
