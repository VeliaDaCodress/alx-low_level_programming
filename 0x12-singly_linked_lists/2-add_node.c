#include "lists.h"
#include <string.h>

/**
 * add_node - this function adds a nodr to the head of a linked list
 * @head: the address of the first element of the linked list
 * @str: the string we want to attach to the head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *old_head;
	int n = strlen(str);

	old_head = malloc(sizeof(list_t));
	old_head->str = head->str;
	old_head->len = head->len;
	old_head->next = head->next;

	head->str = strdup(str);
	head->len = n;
	head->next = old_head;
	return (head);
}
