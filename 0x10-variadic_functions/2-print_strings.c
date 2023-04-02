#include "variadic_functions.h"
#include <string.h>

/**
 * print_strings - Print out numbers
 * @separator: separate the terms of arguments
 * @n: number of arguments passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *my_separator, a_string;

	va_start(strings, n);
	my_separator = strdup(separator);
	if (separator == NULL)
		my_separator = "";
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			my_separator = "";
		a_string = va_arg(strings, char *);
		if (a_string == NULL)
			a_string = "(nil)";
		printf("%s%s", a_string, my_separator);
	}
	va_end(strings);
	printf("\n");
}
