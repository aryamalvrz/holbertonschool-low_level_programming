#include "main.h"
#include <stdio.h>

/**
 *_isupper - Checks for letter C in uppercase
 *@c: uppercase letter test
 *Return: 1 if C is uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
			return (0);
}
