#include "lists.h"
/**
 * free_list - Frees a list_t list
 *
 * @head: Node
 */

void free_list(list_t *head)
{
	list_t *hold;

	while (head != NULL)
	{
		hold = head;
		hold->str = head->str;
		head = head->next;
		free(hold->str);
		free(hold);
	}
}
