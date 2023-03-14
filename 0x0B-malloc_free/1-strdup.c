#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to a newly allocated space in memory
 *
 * @str: The string used to initaialize the memory
 *
 * Return: pointer to the memory
 */

char *_strdup(char *str)
{
	int i;
	char *mem_ptr;

	if (strlen(*str) == 0)
		return (NULL);
	mem_ptr = malloc(sizeof(char) * strlen(*str));
	for (i = 0; i < strlen(*str); i++)
		*(mem_ptr + i) = *(str + 1);
	return (mem_ptr);
}
