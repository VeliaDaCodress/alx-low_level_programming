#include "main.h"

/**
 * _strncat - This fnc contlcatenates two strings
 *
 * @dest: first string
 * @src: second string
 * @n: number of bytes to copy
 *
 * Return: the new combined words
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int src_len = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		dest_len++;
	for (i = 0; src[i] != '\0'; i++)
		src_len++;
	for (i = 0; i <= n; i++)
	{
		if (src[i] != '\0')
			dest[dest_len + i] = src[i];
	}
	dest[n + dest_len] = '\0';
	return (dest);
}
