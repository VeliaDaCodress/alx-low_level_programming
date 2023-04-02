#include "variadic_functions.h"

/**
 * sum_them_all - This function sums up all thw arguments
 * @n: the xount of the numbers
 * Return: integer value of the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list va_l;

	sum = 0;
	va_start(va_l, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(va_l, int);
	va_end(va_l);
	return (sum);
}
