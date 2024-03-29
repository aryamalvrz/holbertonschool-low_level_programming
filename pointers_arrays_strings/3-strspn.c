#include "main.h"

/**
 *_strspn - Gets the lenght of a prefix substring
 *@s: Input string
 *@accept: Input char to locate into s
 *
 * Return: Pointer to c positions
 */

unsigned int _strspn(char *s, char *accept)
{
	int positions = 0, flag;
	char *start = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				positions++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = start;
		if (flag == 0)
		{
			break;
		}
	}
	return (positions);
}
