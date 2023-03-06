#include "main.h"

/**
 * rev_string - This function reverses a string
 * @s: The string to be reversed
 *
 */

void rev_string(char *s)
{
	int count, i;
	char *hold;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
		count++;
	*hold[count];
	for (i = 0; i < count; i++)
	{
		hold[i] = s[i];
	}
	for (i = 0; i < count; i++)
	{
		s[i] = hold[count - i];
	}
}
