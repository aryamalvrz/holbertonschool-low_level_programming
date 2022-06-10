#include "main.h"
/**
 * print_alphabet_x10 - printing alphabet 10
 * times in lowercase, followed by a new line.
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char alpha;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			putchar(alpha);
		}
		putchar('\n');
	}
}
