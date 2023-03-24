#include "function_pointers.c"

/**
 * print_name - function that calls printer
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
