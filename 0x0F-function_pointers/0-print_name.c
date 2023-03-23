#include "function_pointers.h"

/**
 * print_name - A function that prints a name out
 * @name: the name to print
 * @f: pointer to function of the printer
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	(*f)(name);
}

/**
 * main - entry point of the program
 

int main(void)
{
	print_name(
}

*/
