#include "main.h"

/**
 * _abs - this function computes the absolute value of an integer
 *
 * @a: whats the absolute value of n
 *
 * Return: the  absolute value of the number
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a > 0)
		a = a;
	else
		a = 0;
	return (a);
}
