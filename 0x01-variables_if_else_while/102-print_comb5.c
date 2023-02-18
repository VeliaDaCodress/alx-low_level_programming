#include <stdio.h>

/**
 * main - Main function
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	int j;
	
	for (i = 0; i < 100; i++)
	{
		if (i < 10)
		{
			putchar(i + '0');
			putchar(i + '0');
		}
		else if (i >= 10)
			putchar(i + '0');
		if (i != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
