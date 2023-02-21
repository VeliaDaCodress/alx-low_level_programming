#include "main.h"

/**
 * _islower - main function
 *
 * @c: parameter for ascii value of the letter
 * Return: 1 if it is a lower case and 0 if it is not
 *
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
		return (0);
}
