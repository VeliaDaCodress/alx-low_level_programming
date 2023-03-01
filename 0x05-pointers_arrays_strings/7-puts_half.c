#include "main.h"

/**
 * puts_half - this function prints the sexond half of a string
 *
 * @str: the string to be split
 */

void puts_half(char *str)
{
	int length, i, half_length, j;

	length = 0;
	half_length = 0;
	for (i = 0; str[i] != '\n'; i++)
		length++;
	if (length % 2 == 0)
		half_length = length / 2;
	else
		half_length = (length - 1) / 2;
	for (j = half_length; j < length; j++)
		_putchar(str[j]);
}
