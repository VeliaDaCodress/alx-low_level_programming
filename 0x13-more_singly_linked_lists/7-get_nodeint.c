#include "lists.h"

/**
 * get_nodeint_at_index - return node at index
 * @head: pointer to the head of linked list
 * @index: position of the node we want to return
 * Return: the node at index index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *temp;

	count = 0;
	while (count < index && temp)
	{
		temp = temp->next;
		count++;
	}
	return (temp ? temp : NULL);
}
