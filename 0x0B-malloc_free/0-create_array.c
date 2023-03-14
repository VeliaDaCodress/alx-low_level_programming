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
	int *arr = malloc(size * sizeof(char));
	*arr = c;
	return (arr);
}
