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
	listint_t *temp = head;

	count = 0;
	while (count < index && temp)
	{
		temp = temp->next;
		count++;
	}
	return (temp ? temp : NULL);
}

/**
 * insert_nodeint_at_index - insert nodeint at index
 * @head: head of the linked list
 * @idx: the index we want to add the node to
 * @n: the n value of the data field
 * Return: pointer to new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *prev_node;

	prev_node = get_nodeint_at_index(*head, (idx - 1));
	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = head;
		head = new;
		return (new);
	}
	new->n = n;
	new->next = prev_node->next;
	prev_node->next = new;
	return (new);
}
