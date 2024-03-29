#ifndef _linked_list
#define _linked_list

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int _putchar(char c);
/**
 * struct list_s - Singly linked list
 *
 * @str: String
 * @len: Lenght of the string
 * @next: Points the next node
 *
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

/**void _attribute_((constructor))premain();*/

#endif
