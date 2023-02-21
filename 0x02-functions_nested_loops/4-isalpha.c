#include "main.h"

/**
 * _isalpha - The function that checks if parameter is alpha
 *
 * @c: parameter the ascii value of the letter to be checked
 *
 * Return: 1 if parameter is alpha and 0 if otherwise
 *
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 65 && c < 91))
		return (1);
	else
		return (0);
}
