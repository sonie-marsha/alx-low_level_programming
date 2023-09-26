#include "main.h"

/**
 *_strchr - prints out the first occurence of a char
 *@s: string
 *@c: character
 *
 *Return: ptr to c in str
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
