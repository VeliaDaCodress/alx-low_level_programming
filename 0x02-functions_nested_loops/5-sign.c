#include "main.h"

/**
 * print_sign - This function prints the sign of a given number
 *
 * @n: integer value representing the number whose sign we seek
 *
 * Return: 1 if n is positive, -1 if n is negative and 0 if n is 0
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('1');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar('1');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
