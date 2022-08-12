#include "main.h"

/**
 *rev_string - Reverses a string
 *@s: String to be reversed
 */

void rev_string(char *s)
{
	int leng = 0, a = 0;
	char reve;

	while (s[leng] != '\0')
	{
		leng++;
	}
	while (a < leng--)
	{
		reve = s[a];
		s[a++] = s[leng];
		s[leng] = reve;
	}
}

