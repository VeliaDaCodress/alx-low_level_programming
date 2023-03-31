#include "lists.h"



size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)");
		else
			printf("[%u] %s", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
