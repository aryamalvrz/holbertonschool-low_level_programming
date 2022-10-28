#include "lists.h"

/**
 * print_listint - Prints all elements of a list_t list
 *
 * @h: List to print
 *
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
