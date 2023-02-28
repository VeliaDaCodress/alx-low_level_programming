#include "main.h"

/**
 * _puts - This function puts the characters to stdout
 * @str: the string we're putting out there
 *
 */

void _puts(char *str)
{
	int position;
	char letter;

	position = 0;
	letter = str[position];
	while (letter != '\0')
	{
		_putchar(letter);
		position++;
		letter  = str[position];
	}
	_putchar('\n');

}
