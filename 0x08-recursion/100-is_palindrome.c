#include "main.h"

/**
 *len - function that returns the len of a str
 *@s: string
 *
 *Return: len
 */

int len(char *s)
{
	if (*s != '\0')
	{
		return (1 + len(s + 1));
	}
	return (0);
}

/**
 *check - helper function
 *@s: string
 *@n: number
 *
 *Return: checks
 */

int check(char *s, int n)
{
	if (n <= 0)
		return (1);
	if (*s != *(s + n -1))
		return (0);
	else
		return (check (s + 1, n - 2));
}

/**
 *is_palindrome - checks if str is palindrome
 *@s: str
 *Return: 1 if palindrome 0 if not
 */

int is_palindrome( char *s)
{
	int n = len(s);

	return (check(s, n));
}
