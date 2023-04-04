#include "lists.h"

/**
 * get_nodeint_at_index - return node at index
 * @head: pointer to the head of linked list
 * @index: position of the node we want to return
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;
	if (count == index)
		return (head);
	while (count < index)
	{
		head = head->next;
		count++;
	}
	return (head);
}
