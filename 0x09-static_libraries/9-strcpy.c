#include "main.h"

/**
 *_strcpy - copies str pointed to by src including
 *(\0) to buffer pointed to by dest
 *@dest: ptr to buffer to copy the str
 *@src: str to be copied
 *
 *Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	for (len = 0; src[len] != '\0'; len++)
	{
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
