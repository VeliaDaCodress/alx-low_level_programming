#include <stdio.h>
#include "main.h"

/**
 * main - print number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 success
 */

int main(int argc, char *argv[])
{
	argv[0] = argv[0];
	printf("%d\n", (argc - 1));
	return (0);
}
