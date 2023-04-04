#include "lists.h"

/**
 * add_nodeint_end - add node to end of linked list
 * @head: pointer to the head of the list
 * @n: the integer in data field
 * Return: address of new element or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *h = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (h->next)
	{
		h = h->next;
	}
	h->next = new;
	return (new);
}
