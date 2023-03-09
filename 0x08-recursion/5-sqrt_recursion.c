#include "main.h"

/**
 * actual_sqrt_recursion - Recurses to find natural sqrt of num
 * @n: number whose sqrt we need
 * @i: iteration counter
 * Return:the resulting sqrt
 */

int actual_sqrt_recursion(int n, int i)
{
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

/**
 * _sqrt_recursion - A function that returns the natural squarr
 * root of a number
 * @n: parameter whose natural square root we seek
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
