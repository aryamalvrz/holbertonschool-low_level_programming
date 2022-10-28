#include "lists.h"

/**
 * free_listint2 - Function that frees a listint_t list
 *
 * @head: Address of the first node
 *
 * Return: Void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
	{
		while (*head)
		{
			tmp = *head;
			*head = tmp->next;
			free(tmp);
		}

	}
}
