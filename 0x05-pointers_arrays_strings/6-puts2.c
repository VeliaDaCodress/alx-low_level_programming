#include "main.h"

/**
 * puts2 - this prints the string in alternating intervals
 * @str: the string to be printed
 *
 */

void puts2(char *str)
{
	int initial;
	char item;

	initial = 0;
	item = str[initial];
	while (item != '\0')
	{
		if (initial % 2 == 0)
			_putchar(item);
		initial++;
		item = str[initial];
	}
	_putchar('\n');
}
