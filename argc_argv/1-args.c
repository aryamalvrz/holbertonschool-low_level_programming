#include "main.h"

/**
 * main - Prints the # of arguments passed into it
 * @argc: Argument Count
 * @argv: Argument Vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argv[0])
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
