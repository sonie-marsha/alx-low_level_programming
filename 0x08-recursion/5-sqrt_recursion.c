#include "main.h"

/**
 *_sqrt_recursion - returns square root of a number
 *@n: int input
 *
 *Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	else
		return (_sqrt_recursion(n));
}
