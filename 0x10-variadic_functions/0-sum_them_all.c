#include "variadic_functions.h"

/**
 * sum_them_all - This function sums up all thw arguments
 * @n: the xount of the numbers
 * Return: integer value of the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum, i;
	va_list va_l;

	sum = 0;
	va_start(n, va_l);
	for (i = 0; i < n; i++)
		sum += va_arg;
	va_end;
	return (sum);
}
