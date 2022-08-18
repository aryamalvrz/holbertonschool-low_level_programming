#include "main.h"

/**
 * reverse_array - Reverses the content of an
 * array of integers
 *
 *@a: Array
 *@n: Content
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int b = 0, y, c = n - 1;

	while (b < c)
	{
		y = a[b];
		a[b] = a[c];
		a[c] = y;
		b++;
		c--;
	}
}
