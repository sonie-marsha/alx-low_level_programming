#include "variadic_functions.h"
#include <stdio.h>

/**
 *sum_them_all - function that returns the sum of all its parameters
 *@n: the num of int
 *@...: variable number
 *
 *Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
