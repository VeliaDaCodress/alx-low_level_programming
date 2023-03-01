#include "main.h"

/**
 * print_rev - print a given string in reverse order
 * @s: the string we're printing in reverse
 *
 */

void print_rev(char *s)
{
	int i, count;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
		count++;
	while (count > -1)
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}
