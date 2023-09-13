#include "main.h"

/**
 *print_last_digit - prints last digit of a num
 *@n: parameter n
 *
 *Return: 0
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n > 0)
		_putchar(last_digit + '0');

	return (0);
}
