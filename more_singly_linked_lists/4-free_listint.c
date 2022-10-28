#include "lists.h"

/**
 * free_listint - Function that frees a listint_t list
 *
 * @head: Address of the first node
 *
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}

}
