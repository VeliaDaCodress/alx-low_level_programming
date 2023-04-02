#include "lists.h"
#include <string.h>

/**
 * _strlen - get the length of a string
 * @s: the string whose length we seek
 * Return: interger value for the length of string
 */

int _strlen(const char *s)
{
	int i;

	i = 0;
	while(s[i] != '\0')
		i++;
	return (i);
}

/**
 * add_node_end - Add a node to the end of a singly linked list
 * @head: head of the singly linked list
 * @str: the string or valie of the node
 * Return: the address of the new string
 */

list_t *add_node_end(list_t **head, const char *str)
{
   list_t *new, *tmp;


   if (str == NULL)
       return (NULL);
   new = malloc(sizeof(list_t));
   if (new == NULL)
       return (NULL);
   new->str = strdup(str);
   if (new->str == NULL)
   {
       free(new);
       return (NULL);
   }
   new->len = _strlen(new->str);
   new->next = NULL;
   if (*head == NULL)
   {
       *head = new;
       return (new);
   }
   tmp = *head;
   while (tmp->next)
       tmp = tmp->next;
   tmp->next = new;
   return (new);
}
