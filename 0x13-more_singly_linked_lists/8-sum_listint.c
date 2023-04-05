#include "lists.h"

/**
 * sum_listint - Print list int
 * @h: head of the stringly linked list
 * Return: sum of listint data
 */

int sum_listint(const listint_t *h)
{
	int sum;
	listint_t *temp = head;;

	sum = 0;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
