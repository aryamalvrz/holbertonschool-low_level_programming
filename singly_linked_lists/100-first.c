#include <stdio.h>

/**
 * premain - Prints before the main is executed.
 *
 * Return: 0
 */

void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
