#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - function allocates memory using malloc
 *@b: space to be returned
 *
 *Return: 98 for error o/w ptr
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(98);
	}

	return (ptr);
}
