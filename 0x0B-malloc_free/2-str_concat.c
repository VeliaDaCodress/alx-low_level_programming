#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings to a memory
 * @s1: first string
 * @s2: second string
 * Return: new pointet to the created memory
 */

char *str_concat(char *s1, char *s2)
{
	int count, count2;
	unsigned int i;
	char *new_mem;

	count = 0;
	count2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[count] != '\0')
		count++;
	while (s2[count2] != '\0')
	{
		count2++;
	}
	new_mem = malloc(sizeof(char) * (count + count2 + 1));
	if (new_mem == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		new_mem[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		new_mem[i + count] = s2[i];
	new_mem[count + count2] = '\0';
	return (new_mem);
}
