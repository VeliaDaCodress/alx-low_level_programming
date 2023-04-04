#include "lists.h"

/**
 * free_listint2 - free the list
 * @head: the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	while (*head)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	*head = NULL;
}
