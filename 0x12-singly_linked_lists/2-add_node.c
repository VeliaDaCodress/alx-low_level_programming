#include "lists.h"
#include <string.h>

/**
 * _strlen - this fn calculates the length of a string
 * @str: the string whose length we seek
 * Return: integer value of the length of the string
 */

int _strlen(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n)
}
/**
 * add_node - this function adds a nodr to the head of a linked list
 * @head: the address of the first element of the linked list
 * @str: the string we want to attach to the head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *old_head;
	int n = _strlen(str);

	old_head = malloc(sizeof(list_t));
	if (old_head == NULL)
		return (NULL);
	old_head->str = strdup(str);
	old_head->len = n
	old_head->next = *head;
	*head = old_head;
	return (old_head);
}
