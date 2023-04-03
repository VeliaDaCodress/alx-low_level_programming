#include "lists.h"

/**
 * print_listint - Print list int
 * @h: head of the stringly linked list
 * Return: size of the linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
