#include "main.h"

/**
*factorial - This function calculates and return the factorial of a
* variable
* @n: We are solving for the factorial of this parameter
* Return: integer value of the factorial of n
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
