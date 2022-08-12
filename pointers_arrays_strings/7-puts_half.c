#include "main.h"

/**
 *puts_half - Prints half of a string
 *@str: String to be printed
 */

void puts_half(char *str)
{
	int leng = 0, a, n;

	while (str[leng] != '\0')
	{
		leng++;
	}
	if (leng % 2 == 0)
	{
		n = leng / 2;
	}
	else
	{
		n = (leng + 1) / 2;
	}
	for (a = n; a < leng; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
