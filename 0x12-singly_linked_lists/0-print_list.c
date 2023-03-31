#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 * Return: size of the linked tree
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)");
			s += sizeof(*h);
		}
		else
		{
			printf("[%u] %s", h->len, h->str);
			s += sizeof(*h);
		}
		h = h->next;
	}
	return (s);
}
