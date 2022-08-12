#include "main.h"
#include <stdio.h>

/**
 *print_array - Prints element of an array
 *@a: Input int
 *@n: Input int
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
