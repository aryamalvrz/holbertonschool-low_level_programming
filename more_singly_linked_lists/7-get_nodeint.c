#include "lists.h"

/**
 * get_nodeint_at_index - Function that returs the
 * nth node of a listint_t linked list
 *
 * @head: Address of the first node
 * @index: Index of the node
 *
 * Return: The nth node, NULL if node doen't exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head)
	{
		if (index == counter)
			return (head);

		head = head->next;
		counter++;
	}
	return ('\0');
}
