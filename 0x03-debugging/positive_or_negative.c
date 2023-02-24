#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The main is the entry point of the function
 * @n - Represents a randomly generated number
 *
 * Return: always 0
 */

int positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
