#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 *is_pallindrome - check str if pallindrome
 *@s: str to be checked
 *
 *Return: 1 if pallindrome 0 o/w
 */

int is_pallindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
		return (1);

	if (s[0] != s[len -1])
		return (0);

	return (is_pallindrome(s + 1)) && is_pallindrome(s + len -1-1));
}
