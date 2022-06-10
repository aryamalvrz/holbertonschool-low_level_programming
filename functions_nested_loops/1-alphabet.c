#include "main.h"
/**
* print_alphabet - Alphabet in lowercase, followed by a new line
* Return: 0
*/

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
}
