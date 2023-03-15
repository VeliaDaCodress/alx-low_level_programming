#include "main.h"
#include <stdlib.h>

/**
 *
 * str_concat - concatenates two strings to a memory 
 *
 * @si: first string
 * @s2: second string
 *
 * Return: new pointet to the created memory
 */

char *str_concat(char *s1, char *s2)
{
	int count, count2;
	unsigned int i;
	char *new_mem;

	count = 0;
	count2 = 0;
	while (s1[count])
		count++;
	while (s2[count2])
	{
		count2++;
	}
	new_mem = malloc(sizeof(char) * (count + count2));
	if (new_mem == NULL)
		return (new_mem);
	for (i = 0; i < count; i++)
		new_mem[i] = s1[i];
	for (i = count; i < (count + count2); i++)
		new_mem[i] = s2[i - count];
	return (new_mem);
}
