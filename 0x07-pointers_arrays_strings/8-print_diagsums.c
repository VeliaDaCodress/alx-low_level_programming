#include "main.h"

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input 
 */

void prjnt_diagsums(int *a, int size)
{
	int sum1, sum2, y, z;

	sum1 = 0;
	sum2 = 0;
	for (y = 0; y < size; y++)
	{
		for (z = 0, z < size; z++)
		{
			if (y == z)
				sum1 += *(a[y][z]);	
		}
	}
	for (y = 0; y < size; y++)
	{
		for (z = 0; z < size; z++)
		{
			if (y + z == size)
				sum2 += *(a[y][z]);
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
