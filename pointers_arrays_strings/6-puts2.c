#include "main.h"

/**
 *puts2 - Prints every other char of a string,
 *starting with the first char
 *@str: String to be printed
 */

void puts2(char *str)
{
	int leng = 0, a = 0;

	while (str[leng] != '\0')
	{
		leng++;
	}
	leng -= 1;
	for (; a <= leng; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
