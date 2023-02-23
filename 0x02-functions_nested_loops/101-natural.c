#include <stdio.h>

/**
 * main - This function prints the sum of all naturals
 *
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	int sum;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
