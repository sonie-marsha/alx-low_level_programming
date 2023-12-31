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
		return (_sqrt_recursive(n, 1));
}

/**
 *_sqrt_recursive - recursive func that finds square root
 *@n: int
 *@guess: current guess
 *
 *Return: sqrt
 */

int _sqrt_recursive(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (_sqrt_recursive(n, guess + 1));
}
