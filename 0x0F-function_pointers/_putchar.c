#include "function_pointers.h"
#include <stdio.h>

/**
 * putchar - Print out characters
 * @c: char to print out
 * Return: always 0
 */

int putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
