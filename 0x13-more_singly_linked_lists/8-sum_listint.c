#include "lists.h"

/**
 * sum_listint - Print list int
 * @h: head of the stringly linked list
 * Return: sum of listint data
 */

int sum_listint(const listint_t *h)
{
	int sum;

	sum = 0;
	while (h != NULL)
	{
		sum = sum + h->n;
		h = h->next;
	}
	return (sum);
}
