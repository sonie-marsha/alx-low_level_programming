#include "main.h"

/**
 *_strstr - locates a substring
 *@haystack: string
 *@needle: string
 *
 *Return: ptr o/w NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		k = i;
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[k] != needle[j])
				break;
			k++;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}

	return (NULL);
}
