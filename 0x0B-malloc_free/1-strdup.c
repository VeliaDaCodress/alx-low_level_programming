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
	int i, count;
	char *mem_ptr;

	count = 0;
	while (str[count] != '\0')
		count++;
	if (count == 0)
		return (NULL);
	mem_ptr = malloc(sizeof(char) * count);
	if (mem_ptr == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		mem_ptr[i] = str[i];
	return (mem_ptr);
}
