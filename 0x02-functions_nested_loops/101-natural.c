#include <stdio.h>

/**
 * main - This function prints the sum of all naturals
 *
 */

int main(void)
{
	int i;
	int sum;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 || i % 5)
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
