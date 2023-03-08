#include "main.h"

/**
 * _puts_recursion - Print some chars on to the screen
 * @s: A pointer to the string you want to put
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	_puts_recursion(s++);
}
