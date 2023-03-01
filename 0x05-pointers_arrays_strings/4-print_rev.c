#include "main.h"

/**
 * print_rev - print a given string in reverse order
 * @s: the string we're printing in reverse
 *
 */

void print_rev(char *s)
{
	int position, length;
	char front, back;

	length = _strlen(s);
	back = s[(length - 1)];
	front = s[0];
	while (back != front)
	{
		_putchar(back);
		position--;
		back = s[(position - 1)];
	}
	_putchar('\n');
}
