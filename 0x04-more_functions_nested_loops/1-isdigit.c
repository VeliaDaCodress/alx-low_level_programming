#include "main.h"

/**
 * _isdigit - This checks if a given input is a digit or not
 *
 * @c: the number we're checking
 *
 * Return: 1 if c is digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
