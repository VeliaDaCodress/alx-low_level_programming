#include "variadic_functions.h"
#include <string.h>

/**
 * print_numbers - Print out numbers
 * @separator: separate the terms of arguments
 * @n: number of arguments passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;
	char *my_separator;

	va_start(numbers, n);
	my_separator = strdup(separator);
	if (separator == NULL)
		my_separator = "";
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			my_separator = "";
		printf("%d%s", va_arg(numbers, int), my_separator);
	}
	va_end(numbers);
	printf("\n");
}
