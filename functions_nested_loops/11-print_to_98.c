#include "main.h"
#include<stdio.h>
#include<unistd.h>
/**
 * print_to_98 - Prints all natural form n to 98
 * @s: test
 * Return: 0
 */

void print_to_98(int s)
{

	if (s <= 98)
	{
		for (s = s; s <= 97; s++)
			printf("%d, ", s);
	}
	else
		for (s = s; s > 98; --s)
			printf("%d, ", s);
	printf("98\n");
}
