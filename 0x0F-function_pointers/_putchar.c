#include "function_pointers.h"
#include <stdio.h>

/**
 * _putchar - Print out characters
 * @c: char to print out
 * Return: always 0
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
