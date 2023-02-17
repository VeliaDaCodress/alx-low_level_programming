#include <stdio.h>

/**
 * main - This is the entry point
 *
 * Return: always 0
 */

int main(void)
{
	printf("Size of char: %lu byte(s)", sizeof(char));
	printf("Size of an int: %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of float: %lu byte(s)", sizeof(float));
	return (0);
}

