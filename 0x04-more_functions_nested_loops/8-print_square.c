#include "main.h"

/**
 * print_square - This funtion prints some squares
 *
 * @size: integer value for the size of the square
 */

void print_square(int size)
{
	if (size < 1)
		_putchar('\n');
	else
	{
		int j;

		for (j = 0; j < size; j++)
		{
			int k;

			for (k = 0; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
