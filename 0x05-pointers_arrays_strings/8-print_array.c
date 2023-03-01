#include <stdio.h>

/**
 * print_array - Print the elements of an array
 * @a: array of elements
 * @n: length of array
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 2))
			printf(", ");
	}
	printf("\n");
}
