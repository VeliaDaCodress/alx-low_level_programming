#include "main.h"

/**
 * _print_rev_recur - Print the characters in reverse
 * @s: the string to print in reverse
 */

void _print_rev_recursion(char *s)
{
	int lengt;

	lengt = strlen(s);
	if (!lengt)
	{
		_putchar('\n');
		return;
	}
	_putchar(*(s + (lengt - 1)));
	_print_rev_recursion(char (s + (lengt - 1)));
}
