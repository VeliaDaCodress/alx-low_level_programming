#include "main.h"

/**
 * print_line - Ths fnc prints underscores some multiple times
 *
 * @n: the number of times it should be printed
 */

void print_line(int n)
{
	if (n < 1)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
