#include "lists.h"

/**
 * list_len - A function to calculate the number of elements in a linked list
 * @h: Pointer to the first element in the linked list
 * Return: integer value of the lentgth
 */

size_t list_len(const list_t *h)
{
	int length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
