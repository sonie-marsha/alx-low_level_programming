#include "main.h"
#include <string.h>


/**
 *is_palindrome - check str if palindrome
 *@s: str to be checked
 *
 *Return: 1 if palindrome 0 o/w
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
		return (1);

	if (s[0] != s[len - 1])
		return (0);

	return (is_pallindrome(s + 1) && is_pallindrome(s + len -1 - 1));
}
