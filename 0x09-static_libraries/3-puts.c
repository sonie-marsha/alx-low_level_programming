#include "main.h"

/**
 *_puts - prints a string to stdout
 *@s: ptr to string
 *
 *Return: string
 */

void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar ('\n');
}
