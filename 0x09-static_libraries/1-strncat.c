#include "main.h"

/**
 *_strncat - cocatenates two strings
 *@dest: str to be appended
 *@src: str to be appended to dest
 *@n: no. of bytes to be appended to dest
 *
 *Return: ptr to resulting str dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len = 0;

	while (dest[dest_len])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	dest[dest_len] = '\0';

	return (dest);
}
