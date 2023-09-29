#include "main.h"

/**
 *_strcat - concatenates two strings
 *@src: src str to append to dest
 *@dest: destination of the concatenated str
 *
 *Return: ptr to resulting str
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dest_len = 0;

	while (dest[i++])
		dest_len++;
	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];
	return (dest);
}
