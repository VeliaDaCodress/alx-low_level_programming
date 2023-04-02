#include "lists.h"

/**
 * _last_node - This function returns the pointer
 * @h: pointer to the head of the linked list
 * Return: pointer to the tail
 */

list_t *_last_node(list_t **h)
{
	list_t tail;

	while (h != NULL)
	{
		if (h->next == NULL)
			return (h);
		*h = h->next;
	}
}

/**
 * add_node_end - Add a node to the end of a singly linked list
 * @head: head of the singly linked list
 * @str: the string or valie of the node
 * Return: the address of thw new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t l_node, pl_node;

	l_node = malloc(sizeof(list_t));
	if (l_node == NULL)
		return (NULL);
	l_node->str = strdup(str);
	l_node->len = _strlen(str);
	l_node->next = NULL;
	pl_node = _last_node(head);
	pl_node->next = l_node;
	return (l_node);
}
