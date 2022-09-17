#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: String 1
 * @s2: String 2
 * @n: Max number of bytes to be concatenated
 *
 * Return: *s Pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, l = 0, a = 0, y = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[a])
		a++;
	if (n >= a)
		y = i + a;
	else
		y = i + n;
	s = malloc(sizeof(char) * y + 1);
	if (s == NULL)
		return (NULL);
	a = 0;
	while (l < y)
	{
		if (l <= i)
			s[l] = s1[l];
		if (l >= i)
		{
			s[l] = s2[a];
			a++;
		}
		l++;
	}
	s[l] = '\0';
	return (s);
}
