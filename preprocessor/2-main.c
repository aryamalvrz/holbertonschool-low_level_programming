#include <stdio.h>

/**
 * main - Prints the name of the file it was
 * compiled from, followed by a \n
 *
 * Return: void
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
