#include "main.h"

/**
 * main: Multiplies two numbers, followed by a \n.
 * Assume that the two numbers and result of the multiplication
 * can be stored in an int. If the program doesn't receive 2 arguments,
 * print Error, followed by a \n, and return (1).
 * @argc: Argument counter
 * @argv: Argument vector
 *
 * Return: 0 = Success or 1 = Error
 */

int main(int argc; char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1] * atoi(argv[2]);
				printf("%d\n", result);
				}
				else
				{
				printf("Error\n");
				}
				return (0);
				}
