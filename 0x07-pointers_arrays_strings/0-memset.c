#include "main.h"

/**
 * _memset - fills the first n byte of address pointed by s
 *
 * @s: pointer variable
 * @b: character
 * @n: number of bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

