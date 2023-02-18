#include <stdio.h>

/**
 * main - The main function
 *
 * Return: always 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i++ + '0');
	}
	printf("\n");
	return (0);
}
