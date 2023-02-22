#include "main.h"

/**
 * print_last_digit - this function puts the last digit on the screen
 *
 * @a: parameter for function
 *
 * Return: the last man standing
 *
 */

int print_last_digit(int a)
{
	int last_digit;

	last_digit = a % 10;
	if (last_digit < 0)
		last_digit = -(last_digit);
	else
		last_digit = last_digit;
	_putchar(last_digit + '0');
	return (last_digit);
}
