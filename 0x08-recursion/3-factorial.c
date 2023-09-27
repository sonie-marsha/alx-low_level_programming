#include "main.h"

/**
 *factorial - returns a factorial of a number
 *@n: input int
 *
 *Return: factorial
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	if (n > 0)
	{
		n = n * (n - 1);
	}
	return (n);
}
