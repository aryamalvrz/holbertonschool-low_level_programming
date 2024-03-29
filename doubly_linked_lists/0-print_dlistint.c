#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 *
 * @h: list to print
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
