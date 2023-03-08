#include "main.h"

/**
 * _strlen_recursion - recursively getting the length of a string
 * @s: the string whose length we seek
 * Return: integer value of length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion((s + 1));
}
