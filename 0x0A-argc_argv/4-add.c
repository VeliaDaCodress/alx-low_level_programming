#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check if there are digit
 * @str: array str
 * Return: always 0 success
 */

int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		/* count strings */
		if (!isdigit(str[count])) /*check if string is digit */
			return (0);
		count++;
	}
	return (1);
}

/**
 * main - print the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			/* atoi converts strings to int */
			sum += str_to_int;
		}
		/* What happens if a symbol is not a digit */
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum); /*print sum*/
	return (0);
}
