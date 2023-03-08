#include <unistd.h>
#include "main.h"

/**
 * _putchar - this function writes the character c to the standard output
 * @c: the character to print
 *
 * Return: on success 1
 * on error -1 is returned, and errno is set appropraitely
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
