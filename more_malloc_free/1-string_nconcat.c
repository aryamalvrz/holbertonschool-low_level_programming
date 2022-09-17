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
	unsigned int length1, length2, a, y, sum = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (length1 = 0; s1[length1] != '\0'; length1++)

		for (length2 = 0; s2[length2] != '\0'; length2++)

			if (n >= length2)
				sum = length1 + length2;
			else
				sum = length1 + n;
	s = malloc(sizeof(char) * (sum + 1));

	if (s == 0)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
	{
		s[a] = s1[a];
	}
	if (n < length2)
		for (y = 0; y < n; y++)
		{
			s[a] = s2[y];
			a++;
		}
	s[a] = '\0';
	return (s);
}
