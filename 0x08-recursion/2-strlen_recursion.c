#include "main.h"

/**
 *_strlen_recursion - returns length of a string
 *@s: str
 *
 *Return: length of str
 */

int _str_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
