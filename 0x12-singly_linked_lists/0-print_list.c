#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 * Return: size of the linked tree
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;
	list_t current = h;

	while (current)
	{
		if (!current->str)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%u] %s", current->len, current->str);
		}
		current = current->next;
		s++;
	}
	return (s);
}
