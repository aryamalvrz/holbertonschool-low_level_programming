#include "main.h"

/**
 * flip_bits - Function that returns the number of bits
 * you would need to flip to get from one number to another
 *
 * @n:1st number
 * @m: 2nd number
 *
 * Return: number of bits you would need to flip to get from one
 * number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int xor = 0;
	int counter = 0;

	for (xor = 0; xor < 64; xor++)
	{
		if (((n >> xor) & 1) != ((m >> xor) & 1))
			counter++;
	}
	return (counter);
}
