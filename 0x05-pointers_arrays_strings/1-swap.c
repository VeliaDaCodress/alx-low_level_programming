#include "main.h"

/**
 * swap_int - this function swaps the values of two ints
 *
 * @a: first int to be swapped
 * @b: second int to be swapped
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
