#include "main.h"

/**
 * puts_half - this function prints the sexond half of a string
 *
 * @str: the string to be split
 */

void puts_half(char *str)
{
	int length, i, half_length;

	length = 0;
	for (i = 0; str[i] != '\0'; i++)
		length++;
	if (length % 2 == 0)
		half_length = length / 2;
	else
		half_length = (length - 1) / 2;
	for (i = half_length; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
