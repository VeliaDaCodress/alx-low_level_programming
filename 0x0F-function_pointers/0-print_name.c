#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - A function that prints a name out
 * @name: the name to print
 * @f: pointer to function of the printer
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}

/**
 * main - entry point
 * Return: always 0
 */

int main(void)
{
	print_name("joseph", (*print_name_as_is)());
	print_name("joseph", (*print_name_uppercase)());
	return (0);
}
