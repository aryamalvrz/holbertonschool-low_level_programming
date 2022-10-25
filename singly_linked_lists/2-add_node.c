#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 *
 * @head: Address
 * @str: String
 *
 * Return: Node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
	{
		return (0);
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

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
