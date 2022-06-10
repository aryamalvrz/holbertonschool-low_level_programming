#include "main.h"

/**
 * _islower - Checks for lowercase characters
 * @c: letter test
 * Return: 1 if c is lowercase, 0 if otherwise
 */
int _islower(int c)
{

	if (c > 96 && c < 122)
	{
		return (1);
	}
	else
		return (0);
}
