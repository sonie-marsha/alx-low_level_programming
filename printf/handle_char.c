#include "main.h"

/**
 *handle_char - handles c specifier
 *@args: arguments passed
 *Return: 1
 */

int handle_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	putchar(c);
	return (1);
}
