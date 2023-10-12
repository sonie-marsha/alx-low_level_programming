#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_calloc - function allocates memory for an array of nmemb
 *elements of size bytes
 *@nmemb: array
 *@size: bytes
 *
 *Return: ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;
	unsigned char *byte_ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	total_size = nmemb * size;
	byte_ptr = (unsigned char *)ptr;

	for (i = 0; i < total_size; i++)
		byte_ptr[i] = 0;

	return (ptr);
}
