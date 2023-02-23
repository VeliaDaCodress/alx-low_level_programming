#include <stdio.h>

/**
 * main - the main function
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	int first;
	int second;

	first = 1;
	second = 2;

	for (i = 0; i < 50; i++)
	{
		if (i < 49)
			printf("%d, %d,", first, second);
		else
			printf("%d, %d", first, second);
		first = first + second;
		second = first + second;
	}
	printf("\n");
	return (0);
}
