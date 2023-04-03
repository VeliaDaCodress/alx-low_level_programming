#include "lists.h"

/**
 * head - a pointer to pointer to head of linked list
 * @n: integer value to be data of new head
 * Return: pointer to the new head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = head;
	return (new);
}
