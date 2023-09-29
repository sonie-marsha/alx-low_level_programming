#include "main.h"
#include <unistd.h>

/**
 *_putchar - prints a char to stdout
 *@c: char to be printed
 *
 *Return: char
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
