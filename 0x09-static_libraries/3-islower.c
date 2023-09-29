#include "main.h"

/**
 *_islower - prints lowercase letters
 *@c: input char
 *
 *Return: 1 for lowercase 0 for uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
