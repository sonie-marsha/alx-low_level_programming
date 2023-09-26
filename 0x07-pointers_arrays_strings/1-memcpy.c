#include "main.h"

/**
 *_memcpy - a function copies n bytes from
 *memory area src to memory area dest
 *
 *@dest: destination
 *@src: source
 *@n: n bytes
 *
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_ptr = dest;
	char *src_ptr = src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest_ptr++ = *src_ptr++;
	}

	return (dest);
}
