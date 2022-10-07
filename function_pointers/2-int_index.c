#include "function_pointers.h"

/**
 * int_index - Search for an integer
 * @array: Array of integers
 * @size: Number of elements in array
 * @cmp: Pointer to function to compare values
 *
 * Return: Index of the 1st element for which cmp returns 0, or -1 if NO match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
