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
	int i, j;
	char c1, c2;

	for (i = 0 j = len - 1; i < j; i++, j--)
	{
		while (!isalnum(s[i]) && i < j)
			i++;
		while (!isalnum(s[j]) && i < j)
			j--;

		char c1 = tolower(s[i]);
		char c2 = tolower(s[j]);

		if (c1 != c2)
			return (0);
	}

	return (1);
}
