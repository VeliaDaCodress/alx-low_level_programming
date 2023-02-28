#include "main.h"

/**
 * _strlen - This function returns the length of a string to its caller
 * @s: A char typed variable whose length we seek
 *
 * Return: integer value of the length of the string s
 */

int _strlen(char *s)
{
	char present;
	int count;

	count = 0;
	present = s[count];

	while (present != '\0')
	{
		count++;
		present = s[count];
	}
	return (count);
}
