#include "main.h"

/**
 * print_triangle - A function that makes triangles out of ashes
 *
 * @size: the height of the triangle
 */

void print_triangle(int size)
{
	if (size < 1)
		_putchar('\n');
	else
	{
		int i = 1;

		while (i <= size)
		{
			int blank_space, space_iter, pound_iter;

			blank_space = size - i;
			for (space_iter = 1; space_iter <= blank_space; space_iter++)
			{
				_putchar(' ');
			}
			for (pound_iter = 1; pound_iter <= i; pound_iter++)
			{
				_putchar('#');
			}
			_putchar('\n');
			i++;
		}
	}
}
