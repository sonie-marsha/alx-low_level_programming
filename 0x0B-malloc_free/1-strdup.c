#include "main.h"
#include <stdlib.h>

/**
 *_strdup - duplicates a str using malloc
 *@str: str
 *
 *Return: ptr to str o/w NULL
 */

char *_strdup(char *str)
{
	char *dup_str;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
	{
	}

	dup_str = (char *)malloc((len + 1) * sizeof(char));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup_str[i] = str[i];

	dup_str[len] = '\0';

	return (dup_str);
}
