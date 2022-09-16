#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: String 1
 * @s2: String 2
 * @n: Max number of bytes
 *
 * Return: void
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, length1 = 0, lenght2 = 0;
	char *p;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	lenght1 = _strlen (s1)
		lenght2 = _strlen (s2)

		if (n > lenght2)
			n = lenght2;
	p = malloc (lenght1 + n + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < lenght1 + n; i++)
	{
		if (*s1)
		{
			p[i] = *s1
				s1++;
		}
		else
		{
			p[i] = *s2;
			s2++;
		}
	}
	p[i] = '\0';
	return (0);
}
