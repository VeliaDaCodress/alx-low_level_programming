#include "lists.h"

/**
 * free_listint - free the list 
 * @head: the head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
