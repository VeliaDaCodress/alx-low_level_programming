#include <stdlib.h>
#include "main.h"

/**
 * _putchar - Writes char c to the standard output
 * @c: character to be written
 * Return: 1 is returned on success,
 * on error -1 is returned and errno is set appropraitely
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
