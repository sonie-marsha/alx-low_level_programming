#include "main.h"
#include <ctype.h>

/**
 *is_palindrome - check str if palindrome
 *@s: str to be checked
 *
 *Return: 1 if palindrome 0 o/w
 */

int is_palindrome(char *s)
{
	int len = strlen(s);
	int i = 0;
	int j = len -1;

	while (i < j)
	{
		while (i < len && !isalnum(s[i]))
			i++;
		while (j >= 0 && !isalnum(s[j]))
			j--;
		if (i < j && tolower(s[i]) != tolower(s[j]))
			return (0);

		i++;
		j--;
	}

	return (1);
}
