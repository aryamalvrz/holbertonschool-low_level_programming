#include "lists.h"

/**
 * delete_nodeint_at_index - Function that deletes the node
 * at index of a listint_t linked list
 *
 * @head: Address of the first node (double pointer)
 * @index: Index of the node that should be deleted.
 *
 * Return: 1 if success, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *next;
	unsigned int counter = 0;

	tmp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	while (tmp && counter < index - 1)
	{
		tmp = tmp->next;
		counter++;
		if (tmp == NULL || tmp->next == NULL)
			return (-1);
	}
	next = tmp->next->next;
	free(tmp->next);
	tmp->next = next;
	return (1);
}
