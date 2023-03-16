#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of ints from min to max
 * @min: lower bound of the array
 * @max: upper bound of the array
 */

int *array_range(int min, int max)
{
	int *ptr, difference;

	difference = (max - min) + 1;
	if (difference < 0)
		return (NULL);
	ptr = malloc(difference);
	if (ptr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		ptr[(i - min)] = i;
	return (ptr);
}
