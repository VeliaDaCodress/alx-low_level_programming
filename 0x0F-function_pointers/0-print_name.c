#include "function_pointers.c"

/**
 * print_name - function that calls printer
 * @name: the name you want to print
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
