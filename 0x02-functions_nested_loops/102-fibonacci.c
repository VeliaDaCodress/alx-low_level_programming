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
	int next;

	first = 1;
	second = 2;

	printf("%d, %d", first, second);
	for (i = 0; i < 48; i++)
	{
		next = first + second;
		if (i == 47)
			printf("%d", next);
		else
			printf(", %d, ", next);
		first = second;
		second = next;
	}
	printf("\n");
	return (0);
}
