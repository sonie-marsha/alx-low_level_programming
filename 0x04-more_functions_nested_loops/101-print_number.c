#include "main.h"

/**
 *print_number - a function that prints an integer
 *
 *@n: argument parameter
 *Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	else (n / 10)
	{
		print_number(n / 10);
	}

	_putchar('0' + (n % 10));
}
