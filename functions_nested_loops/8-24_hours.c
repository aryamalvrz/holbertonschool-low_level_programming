#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 */


void jack_bauer(void)
{
	int index;
	int index2 = 0;

	for (index = 0; index < 24; index++)
	{
		for (index2 = 0; index2 < 60; index2++)
		{
			_putchar((index / 10) + '0');
			_putchar((index % 10) + '0');
			_putchar(':');
			_putchar((index2 / 10) + '0');
			_putchar((index2 % 10) + '0');
			_putchar('\n');
		}
	}
}
