#include "lists.h"



size_t print_list(const list_t *h)
{
	size_t n;
	list_t present;

	n = 0;

	present = h;
	if (present->str)
	{
		printf("[%u] %s\n", h->len, h->str);
		n++;
	}
	else
	{
		printf("[0] (nil)\n");

	}
	if (present->next != NULL)
	{
		n += size_t print_list(present->next);
	}
	return (n);
}
