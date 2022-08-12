#include "main.h"

/**
 *swap_int - Swaps the value of two integers
 *@a: Input int
 *@b: Input int
 */

void swap_int(int *a, int *b)

{
	int horses;

	horses = *a;
	*a = *b;
	*b = horses;
}
