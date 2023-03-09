#include "main.h"

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
	return (actual_sqrt_recursion(int n, 0);
}

/**
 * actual_sqrt-recursion - Recurses to find natural sqrt of num
 * @n: number whose sqrt we need
 * @i: iteration counter
 * Return:the resulting sqrt
 */

actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(int n, i++));
}
