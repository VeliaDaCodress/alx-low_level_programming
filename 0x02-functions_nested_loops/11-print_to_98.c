#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print all integers from n to 98
 *
 * @n: Starting point of our range
 *
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(",");
				printf(" ");
			}
			n++;
		}
		printf("\n");
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(",");
				printf(" ");
			}
			n--;
		}
		printf("\n");
	}
	else
	{
		printf("%d", n);
		printf("\n");
	}
}
