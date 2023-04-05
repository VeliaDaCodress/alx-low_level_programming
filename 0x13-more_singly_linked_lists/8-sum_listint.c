#include "lists.h"

/**
 * sum_listint - Print list int
 * @head: head of the singly linked list
 * Return: sum of listint data
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
