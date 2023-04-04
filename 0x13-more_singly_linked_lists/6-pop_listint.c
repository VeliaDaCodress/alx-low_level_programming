#include "lists.h"

/**
 * pop_listint - remove element from the head of a linked list
 * @head: pointer to head of a linked list
 * Return: Heads node data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int val;

	if (*head && head)
	{
		temp = (*head)->next;
		val = (*head)->n;
		free(*head);
		*head = temp;
	}
	else
		return (0);
	return (val);
}
