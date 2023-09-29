#include "main.h"

/**
 *_abs - prints absolute value of a number
 *@n: input int
 *
 *Return: 1 if no is > 0,
 *0 if no is 0,
 *+ve if no is negative
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
