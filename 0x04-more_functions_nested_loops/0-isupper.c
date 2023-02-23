#include "main.h"

/**
 * _isupper - This function checks if int is of an upper case letter
 *
 * @c: integer of letter we're checking
 *
 * Return: 0 if c is not upper but 1 if it is
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
