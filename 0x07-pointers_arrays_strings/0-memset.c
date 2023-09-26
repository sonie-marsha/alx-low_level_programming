#include "main.h"

/**
 *_memset - a function that
 *fills memory with a constant byte
 *
 *@s: pointer
 *@b: input char
 *@n: int
 *
 *Return: ptr
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}
	return (s);
}
