#include <stdlib.h>
#include "main.h"

/**
 * create_array - this function creates an array and initialize it 
 * with a character
 * @size: size of the array
 * @c: character it'll be initialized with
 * Return: pointer to the created array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = (char *) malloc(size);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
