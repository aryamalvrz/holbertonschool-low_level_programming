#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 *
 * @head: Address
 * @str: String
 *
 * Return: Node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *hold = *head;

	if (str == NULL)
	{
		return (0);
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (hold->next != NULL)
		hold = hold->next;

	hold->next = new;

	return (new);
}

/**
 * _strlen - Returns length of string
 *
 * @str: String
 *
 * Return: String length
 */

int _strlen(const char *str)
{
	int i = 0;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
