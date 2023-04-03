#include "lists.h"

/**
 * listint_len - function that calculates the length of listint
 * @h: the pointer to the headet
 * Return: size_t number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
