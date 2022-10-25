#include <stdio.h>

/**
 * premain - Prints before the main is executed.
 *
 * Return: 0
 */

void _attribute_((constructor))premain()
{
	printf("You're beat! and yet, you must allow \n
			I bore my house upon my back! \n");
}
